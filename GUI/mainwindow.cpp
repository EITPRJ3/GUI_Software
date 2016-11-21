#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "statistik.h"
#include "spi_worker.h"
#include "QDebug"
#include <makingscreen.h>
#include "database.h"
#include "admin.h"
#include <QThread>
#include "QtCore"
#include "QCoreApplication"

enum CoffeTabel
{
    HOTWATER = 0,
    WEAKCOFFEE = 1,
    NORMALCOFFEE = 2,
    STRONGCOFFEE = 3,
    FAVORITE = 4,
    FAILEDSCREEN = 5,
};

//http://blog.debao.me/2013/08/how-to-use-qthread-in-the-right-way-part-1/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    createDatabase();
    qDebug() << "Thread id kaldt fra MainWindow constructor: " << QThread::currentThreadId() << endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tmpExit_clicked()
{
    close();
}


void MainWindow::on_statistik_clicked()
{
    statistik* stat_window = new statistik();
    stat_window->show();
}


void MainWindow::on_normalCoffee_clicked()
{
    commHelper(NORMALCOFFEE);
}


void MainWindow::on_waterButton_clicked()
{
    commHelper(HOTWATER);
}

void MainWindow::on_weakCoffee_clicked()
{
    commHelper(WEAKCOFFEE);
}

void MainWindow::on_strongCoffee_clicked()
{
    commHelper(STRONGCOFFEE);
}

void MainWindow::commHelper(int cmd)
{
    makingScreen* screen = new makingScreen;
    SPI_worker* Worker = new SPI_worker;

    if(Worker->checkReady())
    {
        screen->init(cmd);
        databaseCountUp(cmd);

        QThread* newThread = new QThread();

        Worker->doSetup(*newThread);
        Worker->moveToThread(newThread);
        connect(this, SIGNAL(choice(int)), Worker, SLOT(sendChoice(int)),Qt::QueuedConnection);
        connect(Worker,SIGNAL(finished()),screen,SLOT(deleteLater()),Qt::QueuedConnection);
        newThread->start();

        emit choice(cmd);
    }
    else
        screen->init(FAILEDSCREEN);
}

void MainWindow::on_favoriteCoffee_clicked()
{
    commHelper(mostPopularCoffee());
}


void MainWindow::on_admin_Button_clicked()
{
    admin* adminScr = new admin;
    adminScr->show();
}

int MainWindow::mostPopularCoffee()
{
    int tmpArray[4];
    int mostPopular=WEAKCOFFEE;

    databaseRead(tmpArray,4);

    for(int i = NORMALCOFFEE; i <= STRONGCOFFEE; i++)
    {
       if(tmpArray[i]>tmpArray[mostPopular])
       {
            mostPopular=i;
       }
    }
    qDebug() << "Most popular" << mostPopular << endl;
    return mostPopular;
}


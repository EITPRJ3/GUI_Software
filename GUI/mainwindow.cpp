#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "statistik.h"
#include "spi_worker.h"
#include "QDebug"
#include <makingscreen.h>
#include "database.h"
#include "admin.h"
#include <QThread>
#include "QList"

int threads = 0;

enum CoffeTabel
{
    HOTWATER = 0,
    WEAKCOFFEE = 1,
    NORMALCOFFEE = 2,
    STRONGCOFFEE = 3,
    FAVORITE = 4,
    FAILEDSCREEN = 5,
};



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
    makingScreen* screen = new makingScreen;

    if(commHelper(NORMALCOFFEE))
    {
        screen->init(NORMALCOFFEE);
        databaseCountUp(NORMALCOFFEE);
    }
    else
        screen->init(FAILEDSCREEN);
}


void MainWindow::on_waterButton_clicked()
{
    makingScreen* screen = new makingScreen;

    if(commHelper(HOTWATER))
    {
        screen->init(HOTWATER);
        databaseCountUp(HOTWATER);
    }
    else
        screen->init(FAILEDSCREEN);
}

void MainWindow::on_weakCoffee_clicked()
{
    makingScreen* screen = new makingScreen;

    if(commHelper(WEAKCOFFEE))
    {
        screen->init(WEAKCOFFEE);
        databaseCountUp(WEAKCOFFEE);
    }
    else
        screen->init(FAILEDSCREEN);
}

void MainWindow::on_strongCoffee_clicked()
{
    QThread::currentThread()->children();

    makingScreen* screen = new makingScreen;

    if(commHelper(STRONGCOFFEE))
    {
        screen->init(STRONGCOFFEE);
        databaseCountUp(STRONGCOFFEE);
    }
    else
        screen->init(FAILEDSCREEN);
}

bool MainWindow::commHelper(int cmd)
{
    SPI_worker* Worker = new SPI_worker;

    if(Worker->checkReady())
    {
    QThread* newThread = new QThread;

    Worker->doSetup(*newThread);
    Worker->moveToThread(newThread);
    connect(this, SIGNAL(choice(int)), Worker, SLOT(sendChoice(int)),Qt::DirectConnection);

    newThread->start();
    emit choice(cmd);

    return true;
    }
    else
        return false;

}

void MainWindow::on_favoriteCoffee_clicked()
{
   makingScreen* screen = new makingScreen;

   if(commHelper(mostPopularCoffee()))
   {
       screen->init(FAVORITE);
       databaseCountUp(FAVORITE);
   }
   else
       screen->init(FAILEDSCREEN);
}


void MainWindow::on_admin_Button_clicked()
{
    admin* adminScr = new admin;
    adminScr->show();
}

int MainWindow::mostPopularCoffee()
{
    int tmpArray[4];
    int mostPopular=1;

    databaseRead(tmpArray,4);

    for(int i = 2; i < 4; i++)
    {
       if(tmpArray[i]>tmpArray[mostPopular])
       {
            mostPopular=i;
       }
    }
    return mostPopular;
}


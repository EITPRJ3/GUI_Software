#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "statistik.h"
#include "spi_worker.h"
#include "QDebug"
#include <makingscreen.h>
#include "database.h"
#include "admin.h"
#include <QThread>

enum CoffeTabel
{
    NORMALCOFFEE = 0,
    WEAKCOFFEE = 1,
    STRONGCOFFEE = 2,
    HOTWATER = 3,
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
    makingScreen* screen = new makingScreen;

    if(status_)
    {
        screen->init(NORMALCOFFEE);
        databaseCountUp(NORMALCOFFEE);
    }
    else
        screen->init(FAILEDSCREEN);
}


void MainWindow::on_waterButton_clicked()
{
    commHelper(HOTWATER);
    makingScreen* screen = new makingScreen;

    if(status_)
    {
        screen->init(HOTWATER);
        databaseCountUp(HOTWATER);
    }
    else
        screen->init(FAILEDSCREEN);
}

void MainWindow::on_weakCoffee_clicked()
{
    commHelper(WEAKCOFFEE);
    makingScreen* screen = new makingScreen;

    if(status_)
    {
        screen->init(WEAKCOFFEE);
        databaseCountUp(WEAKCOFFEE);
    }
    else
        screen->init(FAILEDSCREEN);
}

void MainWindow::on_strongCoffee_clicked()
{
    commHelper(STRONGCOFFEE);
    makingScreen* screen = new makingScreen;
    if(status_)
    {
        screen->init(STRONGCOFFEE);
        databaseCountUp(STRONGCOFFEE);
    }
    else
        screen->init(FAILEDSCREEN);
}

void MainWindow::commHelper(int cmd)
{
    QThread *thread = new QThread;
    SPI_worker* worker = new SPI_worker();

    worker->doSetup(*thread);
    worker->moveToThread(thread);

    connect(this, SIGNAL(sendChoice(int)), worker, SLOT(sendChoice(int)),Qt::DirectConnection);
    connect(worker,SIGNAL(succes(bool)),this,SLOT(setSucces(bool)),Qt::DirectConnection);

    thread->start();
    emit sendChoice(cmd);
}

void MainWindow::setSucces(bool status)
{
    status_ = status;
}

void MainWindow::on_favoriteCoffee_clicked()
{
   commHelper(mostPopularCoffee());

   makingScreen* screen = new makingScreen;
   if(status_)
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
    int tmpArray[3];
    int mostPopular=0;

    databaseRead(tmpArray,3);

    for(int i = 1; i < 3; i++)
    {
       if(tmpArray[i]>tmpArray[mostPopular])
       {
            mostPopular=i;
       }
    }
    return mostPopular;
}


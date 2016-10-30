#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "psocif.h"
#include "statistik.h"
#include "qthread.h"
#include "spi_worker.h"
#include "QDebug"
#include <unistd.h>
#include <makingscreen.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tmpExit_clicked()
{
    exit(1);
}


void MainWindow::on_statistik_clicked()
{

    statistik* stat_window = new statistik(0);
    stat_window->show();
}


void MainWindow::on_normalCoffee_clicked()
{

    int cmd = 2;

    commHelper(cmd);
    makingScreen* screen = new makingScreen;

    if(status_)
        screen->init(cmd = 1);
    else
        screen->init(cmd = 3);;
}


void MainWindow::on_waterButton_clicked()
{
    int cmd = 1;

    commHelper(cmd);
    makingScreen* screen = new makingScreen;

    if(status_)
        screen->init(cmd = 1);
    else
        screen->init(cmd = 3);
}

void MainWindow::on_weakCoffee_clicked()
{
    int cmd = 3;

    commHelper(cmd);
    makingScreen* screen = new makingScreen;

    if(status_)
        screen->init(cmd = 1);
    else
        screen->init(cmd = 3);

}

void MainWindow::on_strongCoffee_clicked()
{
    int cmd = 4;

    commHelper(cmd);
    makingScreen* screen = new makingScreen;


    if(status_)
        screen->init(cmd = 4);

    else
        screen->init(cmd = 3);

}

void MainWindow::commHelper(int cmd)
{
    QThread *thread = new QThread;
    SPI_worker* worker = new SPI_worker();

    worker->doSetup(*thread);
    worker->moveToThread(thread);

    connect(this, SIGNAL(sendChoice(int)), worker, SLOT(setChoice(int)),Qt::DirectConnection);
    connect(worker,SIGNAL(succes(bool)),this,SLOT(setSucces(bool)),Qt::DirectConnection);

    emit sendChoice(cmd);

    thread->start();


}

void MainWindow::setSucces(bool status)
{
    status_=status;
}


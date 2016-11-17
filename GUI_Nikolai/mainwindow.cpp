#include <QThread>
#include <QtCore>
#include <QDebug>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "statistik.h"
#include "makingscreen.h"
#include "database.h"
#include "admin.h"
#include "enums.h"

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

void MainWindow::on_waterButton_clicked()
{
    commHelper(HOTWATER);
}

void MainWindow::on_weakCoffee_clicked()
{
    commHelper(WEAKCOFFEE);
}

void MainWindow::on_normalCoffee_clicked()
{
    commHelper(NORMALCOFFEE);
}

void MainWindow::on_strongCoffee_clicked()
{
    commHelper(STRONGCOFFEE);
}

void MainWindow::on_favoriteCoffee_clicked()
{
    commHelper(mostPopularCoffee());
}

void MainWindow::commHelper(int cmd)
{
    makingScreen* screen = new makingScreen;

    if(Psocif.readyToBrew())
    {
        screen->init(cmd);
        databaseCountUp(cmd);
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
    int mostPopular=HOTWATER;

    databaseRead(tmpArray,4);

    for(int i = WEAKCOFFEE; i <= STRONGCOFFEE; i++)
    {
       if(tmpArray[i]>tmpArray[mostPopular])
       {
            mostPopular=i;
       }
    }
    qDebug() << "Most popular" << mostPopular << endl;
    return mostPopular;
}


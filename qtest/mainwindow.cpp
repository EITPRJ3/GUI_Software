#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "psocif.h"
#include <QMessageBox>

psocif* lort;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    lort = new psocif;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tmpExit_clicked()
{
    exit(0);
}

void MainWindow::on_waterButton_clicked()
{
    //psocif* test = new psocif;
    //test->sendCommand(1);
    //lort->sendCommand(0x01);
    lort->sendCommand(0x00);


}

void MainWindow::on_strongCoffee_clicked()
{
    lort->sendCommand(0x00);
}

void MainWindow::on_normalCoffee_clicked()
{
    lort->sendCommand(0x01);
}

void MainWindow::on_weakCoffee_clicked()
{
    lort->sendCommand(0x02);
}

void MainWindow::on_favoriteCoffee_clicked()
{
    lort->sendCommand(0x03);
}

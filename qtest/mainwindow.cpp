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
    if(lort->sendCommand(0x00))
    {
        QMessageBox msgBox;
        msgBox.setText("Success");
        msgBox.exec();
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Fail");
        msgBox.exec();
    }


}

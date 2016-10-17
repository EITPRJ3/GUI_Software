#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "psocif.h"

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
    lort->sendCmd();
}

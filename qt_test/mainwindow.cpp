#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_kaffe_knap_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("KAFFE BITCHEEEEEES");
    msgBox.exec();
}

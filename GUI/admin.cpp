#include "admin.h"
#include "ui_admin.h"
#include "database.h"
#include "qdebug.h"
#include "status.h"
#include "mainwindow.h"
#include "spi_worker.h"
#include "QThread"
#include "QProcess"
#include "QStringList"

admin::admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    this->setStyleSheet("background-color:white;");
}

admin::~admin()
{
    qDebug() << "Admin nedlagt" << endl;
    delete ui;
}

void admin::getContainerStatus()
{
    QThread *thread = new QThread();
    SPI_worker *worker = new SPI_worker();

    worker->doSetup(*thread);
    worker->moveToThread(thread);

    connect(worker,SIGNAL(containerStatus(int)),this,SLOT(setConStatus(int)),Qt::DirectConnection);
    connect(this,SIGNAL(startStatus()),worker,SLOT(containerStatus()),Qt::DirectConnection);

    thread->start();
    emit(startStatus());
}

void admin::on_Exit_clicked()
{
    deleteLater();
}

void admin::on_clearDatabase_clicked()
{
    clearDatabase();
}

void admin::on_Status_clicked()
{
    getContainerStatus();
    status* statusScreen = new status;
    statusScreen->doStatusScreen(conStatus_);
}

void admin::setConStatus(int conStatus)
{
    conStatus_ = conStatus;
}

void admin::on_Mail_clicked()
{
    QProcess* proces = new QProcess;
    proces->setWorkingDirectory("/home/stud/Documents/PRJ3/MAIL");
    proces->start("/bin/sh",QStringList() << "./waterEmpty.sh");
}

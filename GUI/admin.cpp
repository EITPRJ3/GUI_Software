#include "admin.h"
#include "ui_admin.h"
#include "database.h"
#include "qdebug.h"
#include "status.h"
#include "mainwindow.h"

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
    status *status1= new status;
    status1->show();
}

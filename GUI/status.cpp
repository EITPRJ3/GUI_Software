#include "status.h"
#include "ui_status.h"
#include "psocif.h"
#include "QThread"
#include "QDebug"
status::status(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::status)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

void status::doStatusScreen(int conStatus)
{
    this->show();
    qDebug() << conStatus <<endl;
    switch(conStatus)
    {
    case 0:
        ui->coffee_container->setText("Case 0");
        break;
    default:
        ui->coffee_container->setText("Test");
    }
}

status::~status()
{
    delete ui;
}

#include "status.h"
#include "ui_status.h"
#include "psocif.h"
#include "QDebug"
#include "QPixmap"
status::status(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::status)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    this->setStyleSheet("background-color:white;");
}

void status::doStatusScreen(int conStatus)
{
    QPixmap coffeeMap;
    QPixmap waterMap;

    this->show();
    qDebug() << conStatus <<endl;
    switch(conStatus)
    {
    case 0:
        coffeeMap.load(":/test/coffee_container_yes.png");
        coffeeMap = coffeeMap.scaledToWidth(200);
        waterMap.load(":/test/bottled-yes.png");
        waterMap = waterMap.scaledToWidth(150);

        ui->coffee_container->setPixmap(coffeeMap);
        ui->water_cointainer->setPixmap(waterMap);
        break;
   case 1:
        coffeeMap.load(":/test/coffee_container_yes.png");
        coffeeMap = coffeeMap.scaledToWidth(200);
        waterMap.load(":/test/bottled-no.png");
        waterMap = waterMap.scaledToWidth(150);

        ui->coffee_container->setPixmap(coffeeMap);
        ui->water_cointainer->setPixmap(waterMap);
        break;
    case 2:
        coffeeMap.load(":/test/coffee_container_no.png");
        coffeeMap = coffeeMap = coffeeMap.scaledToWidth(200);
        waterMap.load(":/test/bottled-yes.png");
        waterMap = waterMap.scaledToWidth(150);

        ui->coffee_container->setPixmap(coffeeMap);
        ui->water_cointainer->setPixmap(waterMap);
        break;
    case 3:
        coffeeMap.load(":/test/coffee_container_no.png");
        coffeeMap = coffeeMap.scaledToWidth(200);
        waterMap.load(":/test/bottled-no.png");
        waterMap = waterMap.scaledToWidth(150);

        ui->coffee_container->setPixmap(coffeeMap);
        ui->water_cointainer->setPixmap(waterMap);
        break;
    default:
        break;
    }
}

status::~status()
{
    delete ui;
}


void status::on_Exit_clicked()
{
    deleteLater();
}

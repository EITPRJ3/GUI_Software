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
    this->show();
    qDebug() << conStatus <<endl;
    switch(conStatus)
    {
    case 0:
        QPixmap coffeeMap(":/test/bottled-yes.png");
        QPixmap CoffeePix = coffeeMap.scaledToWidth(150);

        QPixmap waterMap(":/test/coffee_container_yes.png");
        QPixmap WaterPix = waterMap.scaledToWidth(200);

        ui->coffee_container->setPixmap(CoffeePix);
        ui->water_cointainer->setPixmap(WaterPix);

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

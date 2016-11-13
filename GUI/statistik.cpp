#include "statistik.h"
#include "ui_statistik.h"
#include "QDebug"
#include "QPainter"
#include "QRect"
#include "QPixmap"
#include "database.h"
#include "QString"
statistik::statistik(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::statistik)

{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    this->setStyleSheet("background-color:white;");

    databaseRead(dataArray,5);
    setLabels();
    makePie();


}

statistik::~statistik()
{
    delete ui;
}

void statistik::makePie()
{
    QPixmap pixmap(200,200);
    pixmap.fill(QColor("transparent"));


    QPainter painter(&pixmap);
    QRectF size = QRectF(0,10,150,150);

    int lastPosition = 0;

    //Normalkaffe
    painter.setBrush(Qt::red);
    painter.drawPie(size,lastPosition,countProcent(dataArray,0)*3.6*16);
    ui->NormalColor->setStyleSheet("background-color:red;");

    lastPosition += countProcent(dataArray,0)*3.6*16;

    //Weak kaffe
    painter.setBrush(Qt::blue);
    painter.drawPie(size,lastPosition,countProcent(dataArray,1)*3.6*16);
    ui->WeakColor->setStyleSheet("background-color:blue;");

    lastPosition += countProcent(dataArray,1)*3.6*16;

    //strong kaffe
    painter.setBrush(Qt::darkGray);
    painter.drawPie(size,lastPosition,countProcent(dataArray,1)*3.6*16);
    ui->StrongColor->setStyleSheet("background-color:darkGray;");

    lastPosition += countProcent(dataArray,2)*3.6*16;


    //Water kaffe
    painter.setBrush(Qt::yellow);
    painter.drawPie(size,lastPosition,3.6*countProcent(dataArray,3)*16);
    ui->WaterColor->setStyleSheet("background-color:yellow;");

    lastPosition += countProcent(dataArray,3)*3.6*16;

    //Favorite kaffe
    painter.setBrush(Qt::darkGreen);
    painter.drawPie(size,lastPosition,3.6*countProcent(dataArray,4)*16);
    ui->FavoriteColor->setStyleSheet("background-color:darkGreen;");

    this->ui->PieLabel->setPixmap(pixmap);

}

void statistik::setLabels()
{
    int tmpData = 0;

    for(int i = 0; i < 5; i++)
    {
        tmpData += dataArray[i];
    }

    total_ = tmpData;

    ui->NormalLabel->setText("Antal normal kopper: " + QString::number(dataArray[0]) + " stk - " + QString::number((countProcent(dataArray,0)),'g',3) + "%");
    ui->WeakLabel->setText("Antal svage kopper: " + QString::number(dataArray[1]) + " stk - " + QString::number((countProcent(dataArray,1)),'g',3) + "%");
    ui->StrongLabel->setText("Antal st\x91rke kopper: " + QString::number(dataArray[2]) + " stk - " + QString::number((countProcent(dataArray,2)),'g',3) + "%");
    ui->WaterLabel->setText("Antal varm vand kopper: " + QString::number(dataArray[3]) + " stk-" + QString::number((countProcent(dataArray,3)),'g',3) + "%");
    ui->FavoriteLabel->setText("Antal favorit kopper: " + QString::number(dataArray[4]) + " stk - " + QString::number((countProcent(dataArray,4)),'g',3) + "%");
    ui->TotalAntal->setText("Total antal lavet: " + QString::number(total_));
}

float statistik::countProcent(int *dataArray,int index)
{
    return (float)dataArray[index]/getTotal()*100;
}

void statistik::on_Exit_clicked()
{
   QWidget::close();

}


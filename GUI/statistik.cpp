#include "statistik.h"
#include "ui_statistik.h"
#include "QDebug"
#include "QPainter"
#include "QRect"
#include "QPixmap"
#include "database.h"
#include "QString"
#include "QTimer"

enum CoffeTabel
{
    HOTWATER = 0,
    WEAKCOFFEE = 1,
    NORMALCOFFEE = 2,
    STRONGCOFFEE = 3,
    FAVORITE = 4,
};


statistik::statistik(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::statistik)

{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    this->setStyleSheet("background-color:white;");

    databaseRead(dataArray,5);
    setLabels();
    if(total_!=0)
    makePie();

     QTimer::singleShot(10000,this,SLOT(deleteLater()));
}

statistik::~statistik()
{
    qDebug() << "Statistik nedlagt" <<endl;
    delete ui;
}

void statistik::makePie()
{
    QPixmap pixmap(200,200);
    pixmap.fill(QColor("transparent"));


    QPainter painter(&pixmap);
    QRectF size = QRectF(0,10,150,150);

    int lastPosition = 0;

    //Water kaffe
    painter.setBrush(QColor(52,152,219));
    painter.drawPie(size,lastPosition,countProcent(dataArray,HOTWATER)*3.6*16);
    ui->WaterColor->setStyleSheet("background:rgb(52,152,219);");

    lastPosition += countProcent(dataArray,HOTWATER)*3.6*16;

    //Weak kaffe
    painter.setBrush(QColor(155,89,182));
    painter.drawPie(size,lastPosition,countProcent(dataArray,WEAKCOFFEE)*3.6*16);
    ui->WeakColor->setStyleSheet("background:rgb(155,89,182);");

    lastPosition += countProcent(dataArray,WEAKCOFFEE)*3.6*16;

    //Normalkaffe
    painter.setBrush(QColor(231,76,60));
    painter.drawPie(size,lastPosition,countProcent(dataArray,NORMALCOFFEE)*3.6*16);
    ui->NormalColor->setStyleSheet("background:rgb(231,76,60);");

    lastPosition += countProcent(dataArray,NORMALCOFFEE)*3.6*16;


    //strong kaffe
    painter.setBrush(QColor(230,126,34));
    painter.drawPie(size,lastPosition,countProcent(dataArray,STRONGCOFFEE)*3.6*16);
    ui->StrongColor->setStyleSheet("background:rgb(230,126,34);");

    lastPosition += countProcent(dataArray,STRONGCOFFEE)*3.6*16;

    //Favorite kaffe
    painter.setBrush(QColor(39,174,96));
    painter.drawPie(size,lastPosition,3.6*countProcent(dataArray,FAVORITE)*16);
    ui->FavoriteColor->setStyleSheet("background:rgb(39,174,96);");

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
    ui->WaterLabel->setText("Antal varm vand kopper: " + QString::number(dataArray[HOTWATER]) + " stk-" + QString::number((countProcent(dataArray,HOTWATER)),'g',3) + "%");
    ui->WeakLabel->setText("Antal svage kopper: " + QString::number(dataArray[WEAKCOFFEE]) + " stk - " + QString::number((countProcent(dataArray,WEAKCOFFEE)),'g',3) + "%");
    ui->NormalLabel->setText("Antal normal kopper: " + QString::number(dataArray[NORMALCOFFEE]) + " stk - " + QString::number((countProcent(dataArray,NORMALCOFFEE)),'g',3) + "%");
    ui->StrongLabel->setText("Antal st\x91rke kopper: " + QString::number(dataArray[STRONGCOFFEE]) + " stk - " + QString::number((countProcent(dataArray,STRONGCOFFEE)),'g',3) + "%");
    ui->FavoriteLabel->setText("Antal favorit kopper: " + QString::number(dataArray[FAVORITE]) + " stk - " + QString::number((countProcent(dataArray,FAVORITE)),'g',3) + "%");
    ui->TotalAntal->setText("Total antal lavet: " + QString::number(total_));
}

float statistik::countProcent(int *dataArray,int index)
{
    return (float)dataArray[index]/getTotal()*100;
}

void statistik::on_Exit_clicked()
{
   deleteLater();
}


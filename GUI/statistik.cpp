#include "statistik.h"
#include "ui_statistik.h"
#include "QDebug"
#include <QAbstractItemView>

statistik::statistik(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::statistik)

{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

statistik::~statistik()
{
    delete ui;
}

void statistik::on_Exit_clicked()
{
   QWidget::close();

}

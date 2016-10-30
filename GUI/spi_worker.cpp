#include "spi_worker.h"
#include <QDebug>
#include "psocif.h"

SPI_worker::SPI_worker()
{

}

SPI_worker::~SPI_worker()
{

}

void SPI_worker::sendChoice()
{
    psocif* Psocif = new psocif();
    qDebug() << chosen << endl;

    if(Psocif->sendCommand(chosen)==true)
    {
        emit succes(true);
        emit finished();
    }
    else
    {
        emit succes(false);
        emit finished();
    }
}

void SPI_worker::setChoice(int choice)
{
    chosen = choice;

}

void SPI_worker::doSetup(QThread &thread)
{
    connect(&thread,SIGNAL(started()),this,SLOT(sendChoice()),Qt::QueuedConnection);
    connect(this,SIGNAL(finished()),&thread,SLOT(quit()),Qt::QueuedConnection);
    connect(this,SIGNAL(finished()),this,SLOT(deleteLater()),Qt::QueuedConnection);
    connect(&thread,SIGNAL(finished()),&thread,SLOT(deleteLater()),Qt::QueuedConnection);
}
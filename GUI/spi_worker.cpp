#include "spi_worker.h"
#include <QDebug>
#include "psocif.h"
#include <QTimer>

SPI_worker::SPI_worker()
{

}

SPI_worker::~SPI_worker()
{
    qDebug() << "SPI worker nedlagt" << endl;
}

void SPI_worker::sendChoice(int choice)
{
    psocif* Psocif = new psocif();
    qDebug() << "Valgte vaerdi: " << choice << endl;

    if(Psocif->sendCommand(choice)==true)
    {
        qDebug() << " Worker returner True" <<endl;
        emit succes(true);
        emit finished();
    }
    else
    {
        qDebug() << "Worker returner False" <<endl;
        emit succes(false);
        emit finished();
    }
}

void SPI_worker::containerStatus()
{
    psocif* Psocif = new psocif();
    int conStatus = Psocif->readStatus();

    qDebug() << "Vaerdien fra PSOC cointainer status:" << conStatus <<endl;

    emit(containerStatus(conStatus));
    emit(finished());

}

void SPI_worker::setChoice(int choice)
{
    chosen = choice;

}

void SPI_worker::doSetup(QThread &thread)
{

    connect(this,SIGNAL(finished()),&thread,SLOT(quit()),Qt::QueuedConnection);
    connect(this,SIGNAL(finished()),this,SLOT(deleteLater()),Qt::QueuedConnection);
    connect(&thread,SIGNAL(finished()),&thread,SLOT(deleteLater()),Qt::QueuedConnection);
}

void SPI_worker::doConStatusSetup(QThread &thread)
{
    connect(&thread,SIGNAL(started()),this,SLOT(containerStatus()),Qt::QueuedConnection);
    connect(this,SIGNAL(finished()),&thread,SLOT(quit()),Qt::QueuedConnection);
    connect(this,SIGNAL(finished()),this,SLOT(deleteLater()),Qt::QueuedConnection);
    connect(&thread,SIGNAL(finished()),&thread,SLOT(deleteLater()),Qt::QueuedConnection);
}

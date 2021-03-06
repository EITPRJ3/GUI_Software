#include "spi_worker.h"
#include <QDebug>
#include <QTimer>
#include "QThread"
SPI_worker::SPI_worker()
{

}

SPI_worker::~SPI_worker()
{
    emit finished();
    qDebug() << "SPI worker nedlagt" << endl;
    delete Psocif;
}

void SPI_worker::sendChoice(int choice)
{
    qDebug() << "SPI worker thread id" << QThread::currentThreadId() <<endl;
    Psocif = new psocif();
    qDebug() << "Valgte vaerdi: " << choice << endl;
    Psocif->sendCommand(choice);

    if(Psocif->makingDone())
    emit finished();


}

void SPI_worker::containerStatus()
{
    Psocif = new psocif();
    int conStatus = Psocif->readStatus();

    qDebug() << "Vaerdien fra PSOC cointainer status:" << conStatus <<endl;

    emit(containerStatus(conStatus));
    emit(finished());

}


void SPI_worker::doSetup(QThread &thread)
{
    connect(this,SIGNAL(finished()),&thread,SLOT(quit()),Qt::QueuedConnection);
    connect(this,SIGNAL(finished()),this,SLOT(deleteLater()),Qt::QueuedConnection);
    connect(&thread,SIGNAL(finished()),&thread,SLOT(deleteLater()),Qt::QueuedConnection);
}


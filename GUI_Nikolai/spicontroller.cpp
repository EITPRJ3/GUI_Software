#include "spicontroller.h"

SpiController::SpiController()
{
    qDebug() << "SpiController constructor" << endl;
    SPIWorker *worker = new SPIWorker;
    worker->moveToThread(&workerThread);
    connect(this, SIGNAL(orderCoffee(int)), worker, SLOT(operate(int)),Qt::QueuedConnection);
    connect(worker, SIGNAL(resultReady()), this, SLOT(handleResults()), Qt::QueuedConnection);
}

SpiController::~SpiController()
{
    qDebug() << "Deleting controller" << endl;
    workerThread.quit();
    workerThread.deleteLater();
}

void SpiController::start(int coffeeChoice)
{
    workerThread.start();
    emit orderCoffee(coffeeChoice);
}

void SpiController::handleResults()
{
    emit done();
}

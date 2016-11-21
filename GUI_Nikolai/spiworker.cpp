#include "spiworker.h"

SPIWorker::SPIWorker()
{
    psoc = new psocif;
}

SPIWorker::~SPIWorker()
{
    delete psoc;
}

void SPIWorker::operate(int coffeeChoice)
{
    psoc->sendCommand(coffeeChoice);
    while(1)
    {
        qDebug() << "Checking if coffee is done" << endl;
        sleep(1);
        if(psoc->brewingDone())
        {
            qDebug() << "Coffee Done" << endl;
            emit resultReady();
            break;
        }
        qDebug() << "Coffee is not done" << endl;
    }
}



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
    //psoc->sendCommand(coffeeChoice);
    while(1)
    {
        if(psoc->brewingDone())
        {
            emit resultReady();
            break;
        }
        sleep(1);
    }
}



#ifndef SPICONTROLLER_H
#define SPICONTROLLER_H

#include <QObject>
#include <QDebug>
#include <unistd.h>
#include <QThread>
#include "spiworker.h"

class SpiController : public QObject
{
    Q_OBJECT
    QThread workerThread;

public:
    SpiController();
    bool isThreadRunning()
    {
        return workerThread.isRunning();
    }

    ~SpiController();

    void start(int coffeeChoice);

signals:
    void orderCoffee(const int &);
    void done();

public slots:
    void handleResults();
    
private:
    SPIWorker* worker;
};

#endif // SPICONTROLLER_H

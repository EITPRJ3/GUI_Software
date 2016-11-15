#ifndef SPI_WORKER_H
#define SPI_WORKER_H
#include "QObject"
#include "QThread"
#include "psocif.h"

class SPI_worker : public QObject
{
    Q_OBJECT
public:
    SPI_worker();
    ~SPI_worker();
    void doSetup(QThread& thread);
    void doConSetup(QThread &thread);
    bool checkReady(){Psocif = new psocif; return Psocif->readyStatus();}
public slots:
    void sendChoice(int choice);
    void containerStatus();
signals:
    void finished();
    void succes(bool status);
    void containerStatus(int conStatus);
private:
    int chosen;
    psocif* Psocif;
};

#endif // SPI_WORKER_H

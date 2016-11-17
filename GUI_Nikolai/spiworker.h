#ifndef SPIWORKER_H
#define SPIWORKER_H

#include <QObject>
#include <QDebug>
#include "psocif.h"


class SPIWorker : public QObject
{
    Q_OBJECT
public:
    SPIWorker();
    ~SPIWorker();
private:
    psocif *psoc;

signals:
    void resultReady();
public slots:
    void operate(int);
};

#endif // SPIWORKER_H

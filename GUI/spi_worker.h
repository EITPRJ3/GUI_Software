#ifndef SPI_WORKER_H
#define SPI_WORKER_H
#include "QObject"
#include "QThread"

class SPI_worker : public QObject
{
    Q_OBJECT
public:
    SPI_worker();
    ~SPI_worker();
    void doSetup(QThread& thread);
    void doConStatusSetup(QThread &thread);
public slots:
    void setChoice(int choice);
    void sendChoice(int choice);
    void containerStatus();
signals:
    void finished();
    void succes(bool status);
    void containerStatus(int conStatus);
private:
    int chosen;
};

#endif // SPI_WORKER_H

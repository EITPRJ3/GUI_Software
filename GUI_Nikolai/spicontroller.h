#ifndef SPICONTROLLER_H
#define SPICONTROLLER_H

#include <QObject>
#include <QDebug>
#include <unistd.h>
#include <QThread>
#include "psocif.h"
#include "makingscreen.h"

class Worker : public QObject
{
    Q_OBJECT
    QThread workerThread;

public slots:
    void doSomething(int coffeeChoice)
    {
        qDebug() << "SPI worker thread id" << QThread::currentThreadId() <<endl;
        qDebug() << "Valgte vaerdi: " << coffeeChoice << endl;
        Psocif.sendCommand(coffeeChoice);
        while(1)
        {
            qDebug() << "Checking if coffee is done" << endl;
            sleep(1);
            if(Psocif.coffeeDone())
            {
                qDebug() << "Coffee Done" << endl;
                emit(resultReady());
                break;
            }
            qDebug() << "Coffee is not done" << endl;
        }
    }

signals:
    void resultReady();

public:
    bool checkReady(){ return Psocif.readyStatus(); }

private:
    psocif Psocif;

};

class SpiController : public QObject
{
    Q_OBJECT
    QThread workerThread;

public:
    SpiController(int coffeeChoice, makingScreen* screen)
    {
       qDebug() << "SpiController constructor" << endl;
       Worker *worker = new Worker;
       worker->moveToThread(&thread);
       connect(this, SIGNAL(operate(int)), worker, SLOT(doSomething(int)));
       connect(worker, SIGNAL(resultReady()), this, SLOT(handleResults()));
       connect(this, SIGNAL(done()), screen, SLOT(deleteLater()));
       connect(&thread, SIGNAL(finished()), worker, SLOT(deleteLater()));

    }

    ~SpiController()
    {
        qDebug() << "Deleting controller" << endl;
        workerThread.quit();
        workerThread.wait();
    }

    void start(int coffeeChoice, makingScreen* screen)
    {

    }

signals:
    void operate(const int &);
    void done();

public slots:
    void handleResults()
    {

    }

private:
    QThread thread;

};

#endif // SPICONTROLLER_H

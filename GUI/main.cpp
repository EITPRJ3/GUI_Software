#include "mainwindow.h"
#include <QApplication>
#include "spi_worker.h"
#include "QDebug"
#include "QThread"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

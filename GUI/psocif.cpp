#include "psocif.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "QDebug"
#include <unistd.h>
#include "QThread"

psocif::psocif()
{
    //ctor
}

psocif::~psocif()
{
    //dtor
}

void psocif::sendCommand(int cmd)
{
    char cmd_[5];
    sprintf(cmd_, "%d", cmd);
    int fd = open("/dev/psoc_1", O_RDWR);
    write(fd, cmd_, strlen("1"));
    close(fd);

}

char psocif::readCommand()
{
    /*
    char data[2];
    int fd = open("/dev/psoc_1",O_RDONLY);
    */


    return 0;
}


char psocif::readStatus()
{
    return 0;
}

bool psocif::readyStatus()
{
    int a= rand() % 2;
    qDebug() << "Psoc returner " << a <<endl;
    return a;
}

bool psocif::makingDone()
{

    sleep(3);
    return true;
}

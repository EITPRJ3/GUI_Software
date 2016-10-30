#include "psocif.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "QDebug"
psocif::psocif()
{
    //ctor
}

psocif::~psocif()
{
    //dtor
}

bool psocif::sendCommand(int cmd)
{
    char cmd_[5];
    sprintf(cmd_, "%d", cmd);
    int fd = open("/dev/psoc_1", O_RDWR);
    write(fd, cmd_, strlen("1"));
    close(fd);


    int a= rand() % 2;
    qDebug() << "Psoc returner " << a <<endl;
    return a;
}

char psocif::readCommand()
{

}

#include "psocif.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <iostream>

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
    char cmd_[1];
    char data[3];
    int fd = 0;
    int data_ = 0;
    sprintf(cmd_, "%i", cmd);
    fd = open("/dev/psoc_1", O_RDWR);
    write(fd, cmd_, sizeof(cmd));
    read(fd, data,3);
    close(fd);
    data_ = atoi(data);
    return true;
}

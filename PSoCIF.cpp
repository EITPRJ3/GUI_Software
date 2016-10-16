#include "PSoCIF.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>

PSoCIF::PSoCIF()
{
    //ctor
}

PSoCIF::~PSoCIF()
{
    //dtor
}

void PSoCIF::sendCommand(int cmd)
{
    char* cmd_;
    sprintf(cmd_, "%d", cmd);
    int fd = open("/dev/psoc_1", O_RDWR);
    write(fd, cmd_, strlen(cmd_));
    close(fd);
}

char PSoCIF::readCommand()
{

}

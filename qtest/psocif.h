#ifndef PSOCIF_H
#define PSOCIF_H
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>

class psocif
{
public:
    psocif();
    void sendCmd();
};

#endif // PSOCIF_H

#ifndef PSOCIF_H
#define PSOCIF_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <QDebug>
#include "enums.h"

class psocif
{
public:
    psocif();
    ~psocif();
    void sendCommand(int cmd);
    char readErrorState();
    bool readyToBrew();
    bool brewingDone();
    void getData(char* data);
    protected:
    private:
};

#endif // PSOCIF_H

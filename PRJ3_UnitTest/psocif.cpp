#include "psocif.h"

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
    char cmd_[1];
    sprintf(cmd_, "%d", cmd);
    int fd = open("testBuffer.txt", O_CREAT | O_TRUNC | O_RDWR, 0600);

    if(fd < 0)
    {
        qDebug() << "Fejl ved Psoc-SendCommand" <<endl;
        return;
    }

    write(fd, cmd_, strlen("1"));
    close(fd);

}

char psocif::readErrorState()
{
    char data[1];
    if(!getData(&data[0])) return -1;

    data[0] = data[0] & 0x3; //Mask output. Set bits 7:2 to 0

    return data[0];
}

bool psocif::readyToBrew()
{
    char data[1];
    if(!getData(&data[0])) return false;

    int error = data[0] & 0x3;
    int functionState = (data[0] & 0x1C) >> 2;

    //if(functionState != DONE || error != NOERROR)
    if(error != NOERROR)
        return false;
    else
        return true;
}

bool psocif::brewingDone()
{

    char data[1];
    if(!getData(&data[0])) return false;

    data[0] = (data[0] & 0x1C) >> 2;

    return data[0] == 0b101;
}

bool psocif::getData(char* data)
{
    int fd = open("testBuffer.txt",O_RDONLY);

    if( fd < 0)
    {
        qDebug() << "Fejl opstod ved getData" << endl;
        return false;
    }

    read(fd, data, 1);
    close(fd);
    return true;
}

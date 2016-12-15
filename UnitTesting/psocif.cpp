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
    char cmd_[5];
    sprintf(cmd_, "%d", cmd);
    int fd = open("testBuffer", O_RDWR);

    if(fd < 0)
    {
        qDebug() << "Fejl ved Psoc-SendCommand" <<endl;
        return;
    }

    write(fd, cmd_, strlen("11"));
    close(fd);

}

char psocif::readErrorState()
{
    char data[1];
    if(!getData(&data[0])) return -1;

    qDebug() << "Error State:" << " : " << data[0] << endl;
    data[0] = data[0] & 0x3; //Mask output. Set bits 7:2 to 0

    return data[0];
}

bool psocif::readyToBrew()
{
    char data[1];
    if(!getData(&data[0])) return false;
    qDebug() << "readyToBrew() " << +data[0] << endl;

    int error = data[0] & 0x3;
    int functionState = (data[0] & 0x1C) >> 2;

    //if(functionState != DONE || error != NOERROR)
    if(

            error != NOERROR)
        return false;
    else
        return true;
}

bool psocif::brewingDone()
{

    char data[1];
    if(!getData(&data[0])) return false;

    qDebug() << "brewingDone: " << +data[0] << endl;
    data[0] = (data[0] & 0x1C) >> 2;

    return data[0] == 0b101;

    /*if( (rand() % 5) == 1 )
        return true;
    else
        return false;*/
}

bool psocif::getData(char* data)
{
    int fd = open("/dev/psoc_1",O_RDONLY);

    if( fd < 0)
    {
        qDebug() << "Fejl opstod ved getData" << endl;
        return false;
    }

    read(fd, data, 1);
    close(fd);
    return true;
}

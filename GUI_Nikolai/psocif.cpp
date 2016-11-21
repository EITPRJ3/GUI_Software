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
    int fd = open("/dev/psoc_1", O_RDWR);
    write(fd, cmd_, strlen("11"));
    close(fd);

}

char psocif::readErrorState()
{
    char data[1];
    getData(&data[0]);

    qDebug() << "Error State: " << data[1] << " : " << data[0] << endl;
    data[0] = data[0] & 0x3; //Mask output. Set bits 7:2 to 0

    return data[0];

    //return 0;
}

bool psocif::readyToBrew()
{
    char data[5];
    getData(&data[0]);

    for(int i = 0; i < 5; i++)
    {
        qDebug() << "R2B " << i << " : " << +data[i] << endl;
    }
    //qDebug() << "readyToBrew: " << +data[1] << " : " << +data[0] << endl;;
    //data[1] = (data[0] & 0x1C) >> 2; //Flyt function state over i data[1]. Mask bits 7:5 til 0 og 1:0 til 0
    data[0] &= 0x3; //Mask output. Set bits 7:2 to 0
    qDebug() << "Data after mask: " << +data[0] << endl;
    /*
    if(data[1] != DONE)
        return false;
    if(data[0] != NOERROR)
        return false;
    */
    return true;
}

bool psocif::brewingDone()
{

    char data[2];
    getData(&data[0]);
    //data[0] = (data[0] & 0x1C) >> 2;
    qDebug() << "Coffee Done: " << +data[1] << " : " << +data[0] << endl;

    return ( (data[0] & 0x1C) >> 2 ) == DONE;


    /*if( (rand() % 5) == 1 )
        return true;
    else
        return false;*/
}

void psocif::getData(char* data)
{
    int fd = open("/dev/psoc_1",O_RDONLY);
    read(fd, data, 2);
    close(fd);
}

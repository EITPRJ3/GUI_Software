#include "psocif.h"
#include "string"

psocif::psocif()
{

}

void psocif::sendCmd()
{
    char* cmd = "0x92";
    int fd = open("/dev/psoc_1", O_RDWR);
    write(fd, cmd, strlen(cmd));
    close(fd);
}


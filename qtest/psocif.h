#ifndef PSOCIF_H
#define PSOCIF_H
#include <stdlib.h>

class psocif
{
    public:
        psocif();
        ~psocif();
        bool sendCommand(int cmd);
        char readCommand();
    protected:
    private:
};

#endif // PSOCIF_H

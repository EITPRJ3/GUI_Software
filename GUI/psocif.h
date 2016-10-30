#ifndef PSOCIF_H
#define PSOCIF_H

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

#ifndef PSOCIF_H
#define PSOCIF_H

class psocif
{
public:
    psocif();
    ~psocif();
    void sendCommand(int cmd);
    char readCommand();
    char readStatus();
    bool readyStatus();
    bool coffeeDone();
    protected:
    private:
};

#endif // PSOCIF_H

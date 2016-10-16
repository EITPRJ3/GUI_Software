#ifndef PSOCIF_H
#define PSOCIF_H


class PSoCIF
{
    public:
        PSoCIF();
        ~PSoCIF();
        void sendCommand(int cmd);
        char readCommand();
    protected:
    private:
};

#endif // PSOCIF_H

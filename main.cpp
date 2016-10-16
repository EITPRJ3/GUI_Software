#include "PSoCIF.h"
#include <unistd.h>
#include <iostream>

int main()
{
    std::cout << "Cmd: ";
    int cmd = 0;
    std::cin >> cmd;
    PSoCIF* myIF = new PSoCIF;
    myIF->sendCommand(cmd);
}
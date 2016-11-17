#ifndef ENUMS
#define ENUMS

enum Coffe
{
    HOTWATER = 0,
    WEAKCOFFEE = 1,
    NORMALCOFFEE = 2,
    STRONGCOFFEE = 3,
    FAVORITE = 4,
    FAILEDSCREEN = 5,
};

enum errorStates
{
    NOERROR = 0,
    ERRORWATER = 1,
    ERRORCOFFEE = 2,
    ERRORBOTH = 3,
};

enum functionStates
{
    DISPENSINGCOLD = 1,
    HEATING = 2,
    DISPENSINGWARM = 3,
    DISPENSINGCOFFEE = 4,
    DONE = 5,
};


#endif // ENUMS


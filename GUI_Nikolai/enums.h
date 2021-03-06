#ifndef ENUMS
#define ENUMS

enum Coffe
{
    HOTWATER = 1,
    WEAKCOFFEE = 2,
    NORMALCOFFEE = 3,
    STRONGCOFFEE = 4,
    FAVORITE = 5,
    FAILEDSCREEN = 6,
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


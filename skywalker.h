#ifndef SKYWALKER_H
#define SKYWALKER_H
#include "nosenseforce.h"
#include "senseforce.h"

class Skywalker: public SensForce, public NoSenseForce
{
public:
    Skywalker();
};

#endif // SKYWALKER_H

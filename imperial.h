#ifndef IMPERIAL_H
#define IMPERIAL_H
#include "nosenseforce.h"

class Imperial:public NoSenseForce
{
public:
    Imperial(std::string nom,std::string titre);
    void attaque();
};

#endif // IMPERIAL_H

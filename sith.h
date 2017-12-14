#ifndef SITH_H
#define SITH_H
#include "senseforce.h"

class Sith: public SensForce
{
public:
    Sith(std::string nom,bool arme);
    void attaque();
};

#endif // SITH_H

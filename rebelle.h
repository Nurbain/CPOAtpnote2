#ifndef REBELLE_H
#define REBELLE_H
#include "nosenseforce.h"

class Rebelle:public NoSenseForce
{
public:
    Rebelle(std::string nom,std::string titre);
    void attaque();
};

#endif // REBELLE_H

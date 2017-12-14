#ifndef JEDI_H
#define JEDI_H
#include "senseforce.h"

class Jedi: public SensForce
{
public:
    Jedi(std::string nom,bool arme);
    void attaque();
};

#endif // JEDI_H

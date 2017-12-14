#ifndef FONCTEUR_COMPARE_H
#define FONCTEUR_COMPARE_H
#include "personnage.h"
#include "nosenseforce.h"
#include "senseforce.h"

class foncteur_compare
{
public:
    foncteur_compare();
    bool operator()(Personnage* perso1, Personnage* perso2);
};

#endif // FONCTEUR_COMPARE_H

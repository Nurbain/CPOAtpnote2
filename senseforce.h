#ifndef SENSEFORCE_H
#define SENSEFORCE_H
#include "personnage.h"


class SensForce: public Personnage{
public:
    // 1 : utilise le sabre laser , 0 : utilise la force
    bool arme;
    SensForce();

    std::string sabrelaser();
    std::string force();
    std::string attaquePreferer();

};


#endif // SENSEFORCE_H

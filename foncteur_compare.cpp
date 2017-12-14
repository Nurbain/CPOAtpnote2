#include "foncteur_compare.h"


foncteur_compare::foncteur_compare()
{

}

bool foncteur_compare::operator()(Personnage* perso1, Personnage* perso2){
    SensForce* isSensible;
    isSensible = dynamic_cast<SensForce*>(perso1);
    if(isSensible !=NULL)
        return true;
    else
        return false;
}

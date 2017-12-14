#include "sith.h"
#include <iostream>

Sith::Sith(std::string nom,bool arme)
{
    this->nom=nom;
    this->titre = "Le Sith";
    this->arme = arme;
}


void Sith::attaque(){
    std::string arme = this->attaquePreferer();
    std::cout << this->nom <<", "<<this->titre<<", "<<arme<<std::endl;
}

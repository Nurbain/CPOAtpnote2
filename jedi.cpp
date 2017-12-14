#include "jedi.h"
#include <iostream>

Jedi::Jedi(std::string nom,bool arme)
{
    this->nom=nom;
    this->titre = "Le Jedi";
    this->arme = arme;
}


void Jedi::attaque(){
    std::string arme = this->attaquePreferer();
    std::cout << this->nom <<", "<<this->titre<<", "<<arme<<std::endl;
}

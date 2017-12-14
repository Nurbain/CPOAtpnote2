#include "rebelle.h"
#include <iostream>

Rebelle::Rebelle(std::string nom,std::string titre)
{
    this->nom = nom;
    this->titre = titre;
}


void Rebelle::attaque(){
    std::cout << this->nom << ", "<< this->titre << ", " << this->blaster() << std::endl;
}

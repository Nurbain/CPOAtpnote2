#include "imperial.h"

Imperial::Imperial(std::string nom,std::string titre)
{
    this->nom = nom;
    this->titre = titre;
}


void Imperial::attaque(){
    std::cout << this->nom << ", "<< this->titre << ", " << this->blaster() << std::endl;
}

#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include <iostream>

class Personnage{
public:
    std::string nom;
    std::string titre;
    Personnage();
    virtual void attaque() = 0;

};

#endif // PERSONNAGE_H

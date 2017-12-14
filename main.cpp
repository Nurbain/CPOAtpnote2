#include <QCoreApplication>
#include "personnage.h"
#include "imperial.h"
#include "jedi.h"
#include "sith.h"
#include "rebelle.h"
#include "senseforce.h"
#include "nosenseforce.h"
#include "perso_foncteur.h"
#include <vector>
#include <algorithm>
#include "foncteur_compare.h"

void AllAttaque(Personnage* perso){
    perso->attaque();
}

void Print_useForce(Personnage* perso){
    SensForce* isSensible;
    isSensible = dynamic_cast<SensForce*>(perso);
    if(isSensible!=NULL)
        std::cout<<isSensible->nom<<" est sensible a la force"<<std::endl;
    else
        std::cout<<perso->nom<<" n'est pas sensible a la force"<<std::endl;
}


Personnage* coteObscure(Personnage* perso){
    Jedi* isJedi = dynamic_cast<Jedi*>(perso);
    if(isJedi != NULL){
        //Sith* jediCoteObscure = static_cast<Sith*>(isSensible);
        return new Sith(isJedi->nom,isJedi->arme);
    }
    return perso;
}


void chuter(std::vector<Personnage*>& persos){
    std::transform(persos.begin(),persos.end(),persos.begin(),coteObscure);
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::vector<Personnage*> tableau;
    tableau.push_back(new Sith("Dark Maul",1));
    tableau.push_back(new Sith("Dark Sidious",0));
    tableau.push_back(new Jedi("Obiwan Kenobi",0));
    tableau.push_back(new Jedi("Luke SkyWalker",1));
    tableau.push_back(new Rebelle("Nathan", "Le Jaune"));
    tableau.push_back(new Rebelle("Seth ", "Le Magnifique"));
    tableau.push_back(new Imperial("Leila", "trooper"));
    tableau.push_back(new Imperial("Rey", "trooper en chef"));

    //Mélange de l'ordre
    std::random_shuffle(tableau.begin(),tableau.end());

    //Parcourir le tableau
    std::vector<Personnage*>::iterator it;
    for(it = tableau.begin(); it != tableau.end() ; ++it){
        AllAttaque(*it);
    }

    //2eme parcourt pour voir si sensible a la force
    std::cout<<"\n Sensible a la force ?"<<std::endl;
    for(it = tableau.begin(); it != tableau.end() ; ++it){
        Print_useForce(*it);
    }

    std::cout<<"\n Trié :"<<std::endl;
    std::sort(tableau.begin(),tableau.end(),foncteur_compare());
    std::for_each(tableau.begin(),tableau.end(),Print_useForce);

    std::cout<<"\n Coté Obscure des Jedi:  (jedi -> Sith)"<<std::endl;
    chuter(tableau);
    for(it = tableau.begin(); it != tableau.end() ; ++it){
        AllAttaque(*it);
    }

    return 0;
}

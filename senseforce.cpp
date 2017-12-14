#include "senseforce.h"

SensForce::SensForce(){

}

std::string SensForce::sabrelaser(){
    std::string msg = "se bat au sabre laser";
    return msg;
}

std::string SensForce::force(){
    std::string msg = "utilise la force";
    return msg;
}
std::string SensForce::attaquePreferer(){
    if(this->arme == 1){
        return this->sabrelaser();
    }
    else
        return this->force();
}

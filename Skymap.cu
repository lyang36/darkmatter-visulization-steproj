#include "types.h"
#include "Skymap.h"

Skymap::Skymap(Parameter * par){
    params = par;
}

void Skymap::setParams(Parameter * par){
    params = par;
}

bool getMap(){
    //Step 1: convert the particles to circle list
    //Step 2: convert circle List to picture
    //  up hemisphere and lower hemisphere
    //Step 4: convert projection plane to map plane
    return true;
}
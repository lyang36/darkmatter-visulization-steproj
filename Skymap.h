/*Skymap.h*/
/*Class: Skymap*/
/*Lin Yang*/

#ifndef __LY__SKYMAP__
#define __LY__SKYMAP__
#include <string>
#include "Parameter.h"
#include "types.h"
using namespace std;

class Skymap{
private:
    Parameter * params;
public:
    REAL skymap;
    Skymap(Parameter * par);
    void setParams(Parameter * par);
    bool getMap();
};
#endif


/*Parameter.h*/
/*class: Parameter*/
/*Lin Yang (Forrest)*/
#include "types.h"
#include <string>

#ifndef __LY__PARAMETER__
#define __LY__PARAMETER__
//Parameters:
/*DATAFILE = data file path (string)
 *FLUXFACTOR = flux factor (real)
 *CPU_MEM = number of particles (int)
 *GPU_MEM = number of particles (int)
 *PIXES = number of pixels on the stereographics projection south sphere plane (int)
 *
 */

using namespace std;

class Parameter{
public:
    bool is_ready;
    int CPU_MEM;
    int GPU_MEM;
    REAL FLUXFACTOR;
    int PIXES;
    REAL oposx, oposy, oposz; //standing position
    REAL vposx, vposy, vposz; //viewing vector
    string DATAFILE;
 
    //initialization
    Parameter();
    
    //readparameter from the configure.ini
    //if data is ready return is_ready
    bool readParameter();
/*    
    int get_CPU_MEM();
    int get_GPU_MEM();
    REAL get_FLUXFACTOR();
    int get_PIXES();
    string get_DATAFILE;
*/
};
#endif

/* GPU rendering the darkmatter all skymap. Using stereographic projection */
/* Classes:
 * Parameter: read parameter from configure.ini. 
 * Including the units infomation, datafile path etc.
 * Kernel.cu: the GPU files
 * Skymap: dealwith all other stuffes
 *
*/
#include <string>
#include "Parameter.h"

int main(){
    Parameter params;
    params.readParameter();
}
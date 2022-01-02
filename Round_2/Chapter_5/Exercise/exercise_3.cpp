// the following program converts celsius to kelvin
// Below absolute Zero error to be cought in main.

#include "../../../!_Misc/std_lib_facilities.h"

class BelowAbsoluteZero {};

double ctok(double c){

    double k = c + 273.15; // 273.15 is the transfer factor from C to K

    return k;
}

int main(){

    double c = 0;
    cin >> c;
    if (c < -273.15) throw BelowAbsoluteZero();
    double k = ctok(c);
    cout << k << "K.\n";

}
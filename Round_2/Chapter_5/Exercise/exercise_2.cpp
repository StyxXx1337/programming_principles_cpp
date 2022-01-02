// the following program converts celsius to kelvin

#include "../../../!_Misc/std_lib_facilities.h"

double ctok(double c){

    double k = c + 273.15; // 273.15 is the transfer factor from C to K

    return k;
}

int main(){

    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << "K.\n";

}
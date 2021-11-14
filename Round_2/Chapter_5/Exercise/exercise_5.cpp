// the following program converts celsius to kelvin
//                            and kelvin to celsius.
// Below absolute Zero error to be cought in the function
// The program decides based on the unit that you input.
// Currently k : Kelvin and c: Celsius are supported.

#include "../../../!_Misc/std_lib_facilities.h"

class BelowAbsoluteZero {};

double ctok(double c){

    double k = c + 273.15; // 273.15 is the transfer factor from C to K
    if (k < 0) throw BelowAbsoluteZero();

    return k;
}

double ktoc(double k){

    if (k < 0) throw BelowAbsoluteZero();
    double c = k - 273.15; // 273.15 is the transfer factor from C to K

    return c;
}

int main(){

    double temp = 0;
    char unit = ' ';
    cin >> temp >> unit;
    
    double res = 0;
    if (unit == 'k') {
        res = ktoc(temp);
        cout << res << "C.\n";
    }
    else if (unit == 'c') {
        res = ctok(temp);
        cout << res << "K.\n";
    }
    else{
        cout << "Unknown Unit '" << unit << "'.";
    }
}
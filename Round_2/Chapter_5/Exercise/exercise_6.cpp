// This program converts from Fahrenheit to Celsius and Celsius to Fahrenheit.
// The program decides based on the unit that you input.
// Currently f : Fahrenheit and c: Celsius are supported.

#include "../../../!_Misc/std_lib_facilities.h"

class BelowAbsoluteZero { };

double ftoc(double f){

    double c = (f - 32) * 5/9;   // Formular from C to F.
    if (c < -273.15) throw BelowAbsoluteZero();

    return c;
}

double ctof(double c){

    if (c < -273.15) throw BelowAbsoluteZero();
    double f = (c *9/5) - 32;  // Formular from C to F.

    return f;
}

int main(){

    cout << "Please input the temperature you want to convert: ";
    double temp = 0;
    char unit = ' ';

    cin >> temp >> unit;

    double res = 0;

    if (unit == 'f'){
        res = ftoc(temp);
        cout << "Your temperature in Celsius is: " << res << ".\n";
    }
    else if (unit == 'c'){
        res = ctof(temp);
        cout << "Your temperature in Fahrenheit is: " << res << ".\n";
    }
    else{
        cout << "Unknown Unit.\n";
    }

    return 0;
}
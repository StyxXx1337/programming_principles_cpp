// Includes exercise 3 & 4 & 5.

#include "../../!_Misc/std_lib_facilities.h"

bool below_zero_k_check(double k){
    if (k < 0){
        return true;
    }
    return false;
}

double celsius_to_kelvin(double c){
    double k = c + 273.15;
    if (below_zero_k_check(k)){
        simple_error("Value is below 0K.");
    }
    return k;
}

double kelvin_to_celsius(double k){
    if (below_zero_k_check(k)){
        simple_error("Value is below 0K.");
    }

    double c = k - 273.15;

    return c;
}

int main(){

    double value_input = 0.0;
    char unit_input = 'X';
    char result_unit = 'Z';
    double result = 0.0;

    cout << "This Program can convert Celsius to Kelvin and Kelvin to Celsius\n"
        << "Input your value followed by the [K]elvin or [C]elsius: e.g. 100 K\n>>";
    cin >> value_input >> unit_input;

    switch(unit_input) {
        case 'K':
            result = kelvin_to_celsius(value_input);
            result_unit = 'C';
            break;
        case 'C':
            result = celsius_to_kelvin(value_input);
            result_unit = 'K';
            break;
        default:
            simple_error("Not a available choice. Sorry...");
            break;
    }

    cout << "Your input " << value_input << unit_input << " is equal to "
        << result << result_unit <<".\n";

    return 0;
}
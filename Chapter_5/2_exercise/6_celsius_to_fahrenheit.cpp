#include "../../!_Misc/std_lib_facilities.h"

const double absolute_zero_fahrenheit = -459.67;
const double absolute_zero_celsius = -273.15;

double fahrenheit_to_celsius(double f){
    
    if (f < absolute_zero_fahrenheit){
        simple_error("Value below absolute zero!");
    }

    return ((f-32)/1.8);

}

double celsius_to_fahrenheit(double c){
    
    if (c < absolute_zero_celsius){
        simple_error("Value below absolute zero!");
    }

    return ((c*1.8)+32);

}

int main(){

    double value_input = 0.0;
    char unit_input = 'X';
    char result_unit = 'Z';
    double result = 0.0;

    cout << "This Program can convert Celsius to Fahrenheit and Fahrenheit to Celsius\n"
        << "Input your value followed by the [F]ahrenheit or [C]elsius: e.g. 100 C\n>>";
    cin >> value_input >> unit_input;

    switch(unit_input) {
        case 'F':
            result = fahrenheit_to_celsius(value_input);
            result_unit = 'C';
            break;
        case 'C':
            result = celsius_to_fahrenheit(value_input);
            result_unit = 'F';
            break;
        default:
            simple_error("Not a available choice. Sorry...");
            break;
    }

    cout << "Your input " << value_input << unit_input << " is equal to "
        << result << result_unit <<".\n";




    return 0;
}
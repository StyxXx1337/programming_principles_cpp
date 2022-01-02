// This program takes an number and a unit as long as numbers are entered.
// It terminates otherwise.
// The unit supported are cm, m, in, ft.
// When the highest number so far is entered it prints it out.
// Same with the lowest number

#include "../../../!_Misc/std_lib_facilities.h"


int main(){

    double largest = -999999; // To be sure the number is overwritten by any number
    double smallest = 999999; // See above
    double number = 0;
    string unit = " ";
    double sum = 0;
    int counter = 0;

    cout << "Please insert a number with a unit: ";

    while(cin >> number >> unit){
        
        if (unit == "m"){
            number *= 100;
        }
        else if(unit == "cm"){
            number = number;
        }
        else if(unit == "ft"){
            number *= 2.54;
        }
        else if(unit == "in" ){
            number *= 0.0328084;
        }
        else{
            simple_error("Illegal unit.");
        }
        
        sum += number;
        ++counter;
        
        if (number > largest){
            cout << "This is the largest number so far: " << number << endl;
            largest = number;
        }
        if(number < smallest){
            cout << "This is the smallest number so far: " << number << endl;
            smallest = number;
        }

        cout << "\nPlease insert a number: ";
    }

    cout << "The sum entered is: " << sum/100 << "m.\n"
        << "You entered " << counter << " numbers.\n";

    return 0;
}
// This program takes an number as long as numbers are entered.
// It terminates otherwise.
// When the highest number so far is entered it prints it out.
// Same with the lowest number

#include "../../../!_Misc/std_lib_facilities.h"


int main(){

    double largest = -999999; // To be sure the number is overwritten by any number
    double smallest = 999999; // See above
    double number = 0;

    cout << "Please insert a number: ";

    while(cin >> number){
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

    return 0;
}
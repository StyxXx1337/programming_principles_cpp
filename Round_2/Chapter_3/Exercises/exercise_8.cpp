// This program takes a number and returns if the number is even or odd

#include "../../../!_Misc/std_lib_facilities.h"

int main(){
    cout << "Please insert a number: ";
    int number = 0;

    cin >> number;

    cout << "Your number " << number;

    if (number%2 == 0){
        cout << " is an even number.\n";
    }
    else{
        cout << " is an odd number.\n";
    }
}
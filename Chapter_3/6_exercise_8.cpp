#include "../!_Misc/std_lib_facilities.h"

// This program takes a number and determines if it is odd or even

int main(){

    cout << "Please input a number: ";

    int number;
    cin >> number;

    if (number % 2){
        cout << "Your number [" << number << "] is odd.";
    }
    else{
        cout << "Your number [" << number << "] is even.";
    }

}
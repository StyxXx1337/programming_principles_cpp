// This program takes into a word of a number and outputs the digit accordingly.
// Currently only 0, 1, 2, 3, 4 is supported.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){
    cout << "Please input the number you want to have converted: ";
    string input = " ";

    cin >> input;

    cout << "You entered \"" << input << "\". --> ";

    if (input == "zero"){
        cout << "0";
    }
    else if (input == "one"){
        cout << "1";
    }
    else if (input == "two"){
        cout << "2";
    }
    else if (input == "three"){
        cout << "3";
    }
    else if (input == "four"){
        cout << "4";
    }
    else{
        cout << "not a number I know. Stupid computer...";
    }
    return 0;
}
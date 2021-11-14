// This program takes two ints from the keyboard in every loop
// it terminates when a no-digit is inserted.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    int number1 = 0;
    int number2 = 0;

    while(cin >> number1 >> number2){
        cout << "Number 1: " << number1 << "\t\tNumber 2: " << number2 << endl;
    }

    return 0;
}
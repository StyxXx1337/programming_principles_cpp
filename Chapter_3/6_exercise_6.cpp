#include "../!_Misc/std_lib_facilities.h"

int main(){

    cout << "Please insert 3 numbers, separated by white space.\n"
        << "E.g.: 1 2 3: ";

    int number1, number2, number3 {0};

    cin >> number1 >> number2 >> number3;

    if (number1 < number2){
        if (number1 < number3){
            if (number2 < number3){
                cout << number1 << ", " << number2 << ", " << number3;
            }
            else {
                cout << number1 << ", " << number3 << ", " << number2;
            }
        }
        else {
            cout << number3 << ", " << number1 << ", " << number2;
        }
        
    }
    else {
        if (number2 < number3){
            if (number1 < number3){
                cout << number2 << ", " << number1 << ", " << number3;
            }
            else {
                cout << number2 << ", " << number3 << ", " << number1;
            }
        }
        else {
            cout << number3 << ", " << number2 << ", " << number1;
        }
    }
    
}

// This program takes two ints from the keyboard in every loop
// And prints out the smaller first and then the second one.
// it terminates when a no-digit is inserted.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    int number1 = 0;
    int number2 = 0;

    cout << "Please insert 2 numbers: ";

    while(cin >> number1 >> number2){
        if (number1 < number2){
            cout << "The smaller number is: " << number1 
                << "\nThe larger number is: " << number2 << endl;
        }
        else if(number1 > number2){
            cout << "The smaller number is: " << number2 
                << "\nThe larger number is: " << number1 << endl;
        }
        else{
            cout << "You inserted 2 times the same number: " << number1 << endl;
        }
        
        cout << "Please insert 2 numbers: ";
    }

    return 0;
}
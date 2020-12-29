#include "../!_Misc/std_lib_facilities.h"

// This program prompts for 2 values and will return the 
// sum, product, difference and ratio
// also it will determine the smaller and larger number

int main(){

    cout << "Please insert two numbers: ";

    int val1{0};
    int val2{0};

    cin >> val1 >> val2;

    if (val1 == val2){
        cout << "Both numbers have the same value: " << val1 << ".\n";
    }
    else if (val1 > val2){
        cout << "Your first value [" << val1 << "] is bigger than your second ["
            << val2 << "].\n";
    }
    else{
        cout << "Your second value [" << val2 << "] is bigger than your first ["
            << val1 << "].\n";
    }

    cout << "\n===================================="
        << "\nProduct is: \t" << (val1 * val2)
        << "\nDifference is: \t" << (val1 - val2)
        << "\nSum is: \t" << (val1 + val2)
        << "\nRatio is: \t" << double(val1 / val2)
        << "\n====================================";



}
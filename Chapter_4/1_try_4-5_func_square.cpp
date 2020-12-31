#include "../!_Misc/std_lib_facilities.h"

int square(int base){
    int counter;
    int square = 0;

    for (counter = 0; counter < base; ++counter){
        square += base;
    }

    return square;
}

int main(){

    cout << "Please input a number you want to have to the power of 2: ";
    int base;

    cin >> base;

    cout <<"\nThe square of " << base << " is: " << square(base);

    return 0;
}
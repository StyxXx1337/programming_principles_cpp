// This program asks for a number and prints out all the prime numbers until that number.

#include "../../../!_Misc/std_lib_facilities.h"



bool is_a_prime(int number){
    int div = number / 2;

    while (div > 1){
        if (number % div == 0){
            return false;
        }
        
        --div;
    }

    return true;
}


int main(){

    int upper_limit = 0;
    cout << "Please input the upper limit: ";
    cin >> upper_limit;

    for (int x = 1; x <= upper_limit; ++x){
        if (is_a_prime(x)){
            cout << x << " is a prime.\n";
        }
    }

    return 0;
}
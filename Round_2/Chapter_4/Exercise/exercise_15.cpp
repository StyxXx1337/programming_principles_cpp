// This program searches the x first primes.

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

    int amount_primes = 0;
    cout << "Please input the amount of primes: ";
    cin >> amount_primes;

    int counter = 0;
    int x = 2;

    while(counter < amount_primes){
        if (is_a_prime(x)){
            cout << x << " is a prime.\n";
            ++counter;
        }
        ++x;
    }

    return 0;
}
// This program prints out all the prime numbers from one to the upper_limit

#include "../../../!_Misc/std_lib_facilities.h"

constexpr int upper_limit = 100;

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
    for (int x = 1; x <= upper_limit; ++x){
        if (is_a_prime(x)){
            cout << x << " is a prime.\n";
        }
    }

    return 0;
}


/*******************************************************************************
*
*------------------- Also includes Exercise number 14. -------------------------
*
*******************************************************************************/

#include "../../!_Misc/std_lib_facilities.h"

vector <int> search_primes_erastosthenes(int max){

    vector <int> primes = {};
    
    for (int i = 2; i <= max; ++i){
        primes.push_back(i);
    }
    cout << "Size: " << primes.size() << '\n';

    for (int i = 0; i <= sqrt(primes.size()+1); ++i){
        if (primes[i] == 0){
            // Skip
        }
        else{
            for (int multiplier = primes[i]; (multiplier * primes[i]) < (primes.size()+2); ++multiplier){
                primes[(primes[i] * multiplier)-2] = 0;
            }

        }
    }

    return primes;

}

void print_primes(vector <int> primes){

    cout << "Printing Primes: \n";

    for (int i = 0; i < primes.size(); ++i){
        if (i > 0){
            if (primes[i-1] > 0){
                cout << ", ";
            }
        }

        if (primes[i] > 0){
            cout << primes[i];
        }
    }
}


int main(){

    int maximum = 0;
    vector <int> primes;

    cout << "This programm searches and outputs the prime numbers.\n"
        << "Please input the number until which you want to search prime numbers: ";
    cin >> maximum;

    primes = search_primes_erastosthenes(maximum);
    print_primes(primes);

    return 0;
}
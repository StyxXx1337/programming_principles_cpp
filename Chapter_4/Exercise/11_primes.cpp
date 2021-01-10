/*******************************************************************************
*
*------------------- Also includes Exercise number 12. -------------------------
*
*******************************************************************************/
#include "../../!_Misc/std_lib_facilities.h"

vector <int> primes = {2, 3};

void search_primes(int max){
    
    int checker = 0;

    for (int outer = 4; outer <= max; ++outer){
        for (int inner = 0; inner < primes.size(); ++inner){
            if ((outer % primes[inner]) == 0){
                checker = 1;
                break;
            }
        }
        if (checker == 0){
            primes.push_back(outer);
        }
        checker = 0;
    }
}

void print_primes(){

    for (int i = 0; i < primes.size(); ++i){
        if ( i > 0){
            cout << ", ";
        }

        cout << primes[i];
    }
}

int main(){
    
    int maximum = 0;

    cout << "This programm searches and outputs the prime numbers.\n"
        << "Please input the number until which you want to search prime numbers: ";
    cin >> maximum;

    search_primes(maximum);
    print_primes();

    return 0;
}
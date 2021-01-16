#include "../../!_Misc/std_lib_facilities.h"

vector <int> primes = {};

void search_primes(int max_amount){
    
    int checker = 0;
    int counter = 0;

    for (int outer = 2; counter < max_amount; ++outer){
        for (int inner = 0; inner < primes.size(); ++inner){
            if ((outer % primes[inner]) == 0){
                checker = 1;
                break;
            }
        }
        if (checker == 0){
            primes.push_back(outer);
            ++counter;
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
        << "How many prime numbers do you want to search: ";
    cin >> maximum;

    search_primes(maximum);
    print_primes();

    return 0;
}
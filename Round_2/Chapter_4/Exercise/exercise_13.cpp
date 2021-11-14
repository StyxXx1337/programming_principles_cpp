// This program uses the "Sieve of Eratosthenes" algorithm to find primes between 2 and the upper limit

#include "../../../!_Misc/std_lib_facilities.h"

constexpr int upper_limit = 100;

vector<int> make_a_vector(int max){

    vector<int> numbers;
    for (int x = 0; x<= max; ++x){
        numbers.push_back(x);
    }
    
    return numbers;
}

vector<int> prime_vector(vector<int> in_vec){

    int current = 2;

    while (current <= sqrt(in_vec.size())){
        
        int start = (current * current);
        
        while(start <= in_vec.size()){
            in_vec[start] = 0;
            start += current;
        }

        ++current;

        while (in_vec[current] == 0){
            ++current;
        }   
    }
    return in_vec;
}

int main(){

    vector<int> number_list = make_a_vector(upper_limit);
    vector<int> result = prime_vector(number_list);

    for (int x : result){
        if (x >= 2){
            cout << x << " is a prime.\n";
        }
    }
    return 0;
}
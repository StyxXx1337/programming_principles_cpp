// This program creates and prints out until the n-th Fibonacci Number.
// The algorithm is non-recursive.

#include "../../../!_Misc/std_lib_facilities.h"

int calc_fibonacci(int nth){

    int current = 1;
    int previous = 0;
    int result = current;
    
    while(nth > 1){
        result = current + previous;
        previous = current;
        current = result;
        --nth;
    }

    return result;

}

int main(){

    // This Function will return the Fibonacci number at the requested position
    /**
    cout << "Which number of the fibonacci sequence do you want? ";
    int position = 0;
    cin >> position;

    for (int n = 1; n <= position; n++){
        cout << "The " << n << " Fibonacci number is: " << calc_fibonacci(n) << ".\n";
    }
    **/
    

    // Searched for the biggest Fibonacci number that fits into a signed int.
    int pos = 1;
    int result = calc_fibonacci(pos);

    while (result > 0){
        ++pos;
        result = calc_fibonacci(pos);
    }

    cout << "Until the " << pos - 1 << "th position Fibonacci numbers fit into an int.";
    
    return 0;
}
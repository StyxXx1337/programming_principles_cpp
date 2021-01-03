#include "../../!_Misc/std_lib_facilities.h"

int main(){

    constexpr int max_squares = 64;
    constexpr int start = 1;
    
    double sum = 0;
    double last_square = 0;
    double next_square = 1;
    int counter = 0;
    double check_value = 1000;

    cout << "How much should be the limit: ";
    cin >> check_value;

    for (int loop = start; sum < check_value; ++loop){
        sum += next_square;
        last_square = next_square;
        next_square *= 2;
        ++counter;
    }

    cout << "The amount of " << check_value << " was reached after " << counter
        << " squares. The sum is " << sum;

    return 0;
}
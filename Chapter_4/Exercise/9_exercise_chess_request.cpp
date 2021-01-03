#include "../../!_Misc/std_lib_facilities.h"

int main(){

    constexpr int max_squares = 64;
    constexpr int start = 1;
    
    double sum = 0;
    double last_square = 0;
    double next_square = 1;
    int counter = 0;

    for (int loop = start; loop < max_squares; ++loop){
        sum += next_square;
        last_square = next_square;
        next_square *= 2;
        ++counter;
    }

    cout << "The amount of the chess inventor asked for was: " << sum;

    return 0;
}
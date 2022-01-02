// Calcualtes the doubeling for 64 times


#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    double sum = 1;

    for (int x = 0; x < 64; ++x){

        sum *= 2;
        cout << "Loop number " << x+1 << " and the sum is: " << sum << ".\n";

    }
}
//Implement the square function using the plus operator

#include "../../../!_Misc/std_lib_facilities.h"

double square(double);

int main(){

    double number = 9;

    cout << "Of " << number << " the square is: " << square(number) << endl;
    return 0;
}



double square(double x){
    
    double total = 0;
    
    for (int i = 0; i < x; ++i){
        total += x;
    }

    return total;
}
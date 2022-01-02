#include "../../../!_Misc/std_lib_facilities.h"

string temps[3] = {"Celsius", "Kelvin", "Fahrenheit"};

void foo(const int len){
    // We can use that const to make sure, that the number is not changed by accident.
    // e.g. as a lenght of an const array.
    for (int x = 0; x < len; ++x){
        cout << "Temps: " << temps[x] << endl;
    }

}

int main(){

    int f = 3;
    foo(f);

}
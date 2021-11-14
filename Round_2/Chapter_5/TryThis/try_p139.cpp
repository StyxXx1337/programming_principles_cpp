// This file checks how the compiler reacts to type errors
// It won't compile, since the errors are kept and not corrected.

#include "../../../!_Misc/std_lib_facilities.h"

int area(int length, int width);

int main(){

    int x0 = arena(7);
    int x1 = area(7);
    int x2 = area("seven", 2);
    
    return 0;
}

int area(int length, int width){

    return length * width;
}
// This is a try to see how the compiler reacts to syntax exrros.
// it won't compile since I keept the errors.

#include "../../../!_Misc/std_lib_facilities.h"

int area(int length, int width);

int main(){

    int s1 = area(7;
    int s2 = area(7)
    Int s3 = area(7);
    int s4 = area('7);

    return 0;
}


int area(int length, int width){

    return length * width;

}
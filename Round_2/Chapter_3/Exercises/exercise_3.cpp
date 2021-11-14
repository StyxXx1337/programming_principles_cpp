// This program does nothing, just for checking how the compiler reacts to
// illegal variable names.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    int double = 0;
    int 1_what_is_this = 0;
    string nice to know = "Hello!";
    char $-character = '$';

    return 0;
}
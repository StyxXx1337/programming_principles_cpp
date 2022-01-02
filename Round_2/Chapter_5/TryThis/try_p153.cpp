// This program tests, how C++ deals with a uncaught error.

#include "../../../!_Misc/std_lib_facilities.h"

void error_func(string s){
    
    throw runtime_error(s);

}

int main(){

    error_func("Hello!");

    return 0;
}
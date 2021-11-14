#include "my.h"
#include "../../../../!_Misc/std_lib_facilities.h"

int foo; // Why do I need this?

void print_foo(){
    std::cout << foo << endl;
    foo = 700;
}

void print(int i){
    std::cout << i << endl;
}
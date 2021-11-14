// Error to see what the compiler is showing:
// Instead of " use ' for the string Hello World\ on line 8.
// It compiles with warning. The output of the programm is not as intended.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){
    cout << 'Hello World!\n';
    keep_window_open();
    return 0;
}
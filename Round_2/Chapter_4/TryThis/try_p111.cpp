// This program prints out the alphabet with the corresponding numbers
// separated with a "tab"

#include "../../../!_Misc/std_lib_facilities.h"

constexpr char start = 'a';

int main(){

    int counter = start;

    cout << "Letter" << "\t\t" << "Number" << "\n";
    cout << "==============================\n";
    while (counter <= 'z'){
        cout << char(counter) << "\t\t" << counter << "\n";
        ++counter;
    }

    return 0;
}
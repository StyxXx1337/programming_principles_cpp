// This program prints out the alphabet with the corresponding numbers
// separated with a "tab"
// This time with a for-loop

#include "../../../!_Misc/std_lib_facilities.h"

constexpr char start = 'a';

int main(){

    cout << "Letter" << "\t\t" << "Number" << "\n";
    cout << "==============================\n";
    for (int counter = start; counter <= 'z'; ++counter){
        cout << char(counter) << "\t\t" << counter << "\n";
    }

    return 0;
}
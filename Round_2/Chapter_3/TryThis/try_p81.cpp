// This is the Try This box from Chapter 3 page 81.
// This program is to check conversin of types

#include "../../../!_Misc/std_lib_facilities.h"

int main(){
    double d =0;
    while(cin >> d){
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d << '\n'
            << "\ni==" << i << '\n'
            << "\ni2==" << i2 << '\n'
            << "\nchar(" << c << ")\n";
    }
}
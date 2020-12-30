#include "../!_Misc/std_lib_facilities.h"

// this program conversts names of digits into digits
// e.g. one --> 1

int main(){

    cout << "Please input a name for a digit: ";

    string digit;
    cin >> digit;

    if (digit == "zero" || digit == "Zero"){
        cout << "0";
    }
    else if (digit == "one" || digit == "One"){
        cout << "1";
    }
    else if (digit == "two" || digit == "Two"){
        cout << "2";
    }
    else if (digit == "three" || digit == "Three"){
        cout << "3";
    }
    else if (digit == "four" || digit == "Four"){
        cout << "4";
    }
    else if (digit == "five" || digit == "Five"){
        cout << "5";
    }
    else if (digit == "six" || digit == "Six"){
        cout << "6";
    }
    else{
        simple_error("Not implemented yet!");
    }

    return 0;
}
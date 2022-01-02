// This program is a very simple caluclator
// Taking into an operation and two numbers.
// returns the result of the operation with the two numbers
// E.g. + 100 3.14
// Return 103.14

#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    cout << "Please enter an operation followed by two numbers: ";
    string operation = " ";
    double first = 0;
    double second = 0;

    cin >> operation >> first >> second;
    cout << "\nThe result of " << first << ' ' << operation << ' ' << second
            << " is: ";

    if (operation == "+" || operation == "plus"){
        cout << first + second <<".\n";
    }
    else if (operation == "-" || operation == "minus"){
        cout << first - second <<".\n";
    }
    else if (operation == "*" || operation == "mul"){
        cout << first * second <<".\n";
    }
    else if (operation == "/" || operation == "div"){
        cout << first / second <<".\n";
    }

    return 0;
}
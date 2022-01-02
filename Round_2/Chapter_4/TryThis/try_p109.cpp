// This asks the user for a amount in Kroner or Yen or Pounds
// Then returns the value in Dollars.
// This time implemented with switch statements.

#include "../../../!_Misc/std_lib_facilities.h"

constexpr float kroner_to_dollar = 0.11584;
constexpr float yen_to_dollar = 0.0090;
constexpr float pounds_to_dollar = 1.36;

int main(){

    cout << "Please enter an amount and a unit to convert to dollars.\n"
            << "Kroner: [k]\nJapanese Yen: [y]\nBritish Pound: [p]\n"
            << "E.g [100k] : ";

    double amount = 0;
    char unit = 'x';

    cin >> amount >> unit;

    cout << "Your inputted value of " << amount << unit;

    switch(unit){
    case 'k':
        amount *= kroner_to_dollar;
        break;
    
    case 'y':
        amount *= yen_to_dollar;
        break;

    case 'p':
        amount *= pounds_to_dollar;
        break;
    
    default:
        cout << " is not convertable since the unit is not known to me.\n";
        return -1;
        break;
    }
    
    cout << " is equivalent to $" << amount << ".\n";

    return 0;
}
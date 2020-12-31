


#include "../!_Misc/std_lib_facilities.h"


int main(){
    cout << "Here you can calculate the dollar amount for your\n"
        << "Japanese Yen: Y \t Swedish Crowns: K \t British Pounds: P\n"
        << "Your Input: ";

    constexpr int jpy_to_dol = 115;
    constexpr double crowns_to_dol = 0.122;
    constexpr double pounds_to_dol = 1.353;
    double value;
    char unit = {'X'};

    cin >> value >> unit;

    if (unit == 'Y'){
        cout << "The " << value << "JPY is equal to " << value * jpy_to_dol << "$.";
    }
    else if (unit == 'K'){
        cout << "The " << value << "SEK is equal to " << value * crowns_to_dol << "$.";
    }
    else if (unit == 'P'){
        cout << "The " << value << "BP is equal to " << value * pounds_to_dol << "$.";
    }
    else{
        cout << "The unit you entered is not implemented yet.";
    }
}
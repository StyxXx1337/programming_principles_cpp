#include "../!_Misc/std_lib_facilities.h"


int main(){
    cout << "Here you can calculate the dollar amount for your\n"
        << "  Japanese Yen: Y \n  Swedish Crowns: K \n  British Pounds: P\n  Chinese Huan: H\n"
        << "Your Input: ";

    constexpr double jpy_to_dol = 0.08;
    constexpr double crowns_to_dol = 0.122;
    constexpr double pounds_to_dol = 1.353;
    constexpr double huan_to_dol = 0.153;
    double value;
    char unit = {'X'};

    cin >> value >> unit;

    switch(unit){
    case 'Y':
        cout << "The " << value << "JPY is equal to " << (value * jpy_to_dol) << "$.";
        break;
    case 'K':
        cout << "The " << value << "SEK is equal to " << (value * crowns_to_dol) << "$.";
        break;
    case 'P':
        cout << "The " << value << "BP is equal to " << (value * pounds_to_dol) << "$.";
        break;
    case 'H':
        cout << "The " << value << "CNY is equal to " << (value * huan_to_dol) << "$.";
        break;
    default:
        cout << "The unit you entered is not implemented yet.";
        break;
    }
}
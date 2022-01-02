// Converter from miles to kilometer

#include "../../../!_Misc/std_lib_facilities.h"
constexpr float MILE_TO_KM = 1.609;


int main(){
    cout << "\n\nThis program converts your input in miles to kilometers.\n";
    cout << "Please insert the amount of miles: ";

    double miles = 0;
    cin >> miles;
    double kilometers = miles * MILE_TO_KM;

    cout << "Your input " << miles << "mi is equal to " << kilometers << "km.\n";

    return 0;

}
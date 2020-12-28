#include "../!_Misc/std_lib_facilities.h"

int main(){

    cout << "Please choose if one of the following options\n"
        << "[1] miles to kilometers\n"
        << "[2] kilometers to miles\n";

    int user_choice;
    double miles_to_km = 1.609;

    cin >> user_choice;
    if (user_choice == 1){
        cout << "Please input the miles you want to convert: ";
        double miles;
        cin >> miles;
        cout << "Your input " << miles << "miles is equal to " << miles*miles_to_km << "km.\n";
    }
    else if (user_choice == 2){
        cout << "Please input the kilometers you want to convert: ";
        double kilometers;
        cin >> kilometers;
        cout << "Your input " << kilometers << "km is equal to " << kilometers/miles_to_km << "miles.\n";
    }
    else{
        cout << "Please input a valid choice";
    }

}
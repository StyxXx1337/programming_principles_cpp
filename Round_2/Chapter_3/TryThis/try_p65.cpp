// This is the Try This box from Chapter 3 page 65.
// This program asks the user for it's name and age and returns it.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    cout << "Please enter your first name and age:\n";
    string first_name;
    double age;
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name << " (age " << age << "years old.)\n";
    cout << "Hello, " << first_name << " (age " << age*12 << "months old.)\n";
}
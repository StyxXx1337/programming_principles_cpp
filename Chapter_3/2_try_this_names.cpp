#include "../!_Misc/std_lib_facilities.h"

int main(){
    
    cout << "Please enter your first name, last name and age\n";
    string first_name;
    string last_name;
    double age = 0;
    cin >> first_name;
    cin >> last_name;
    cin >> age;
    cout << "Hello, " << first_name << " " << last_name << "(age " << age << "[" << age * 12 << "months])\n";
}
#include "../!_Misc/std_lib_facilities.h"

int main(){

    cout << "Please insert 3 words, separated by white space.\n"
        << "E.g.: Hello World Zero: ";

    string string1, string2, string3 {0};

    cin >> string1 >> string2 >> string3;

    if (string1 < string2){
        if (string1 < string3){
            if (string2 < string3){
                cout << string1 << ", " << string2 << ", " << string3;
            }
            else {
                cout << string1 << ", " << string3 << ", " << string2;
            }
        }
        else {
            cout << string3 << ", " << string1 << ", " << string2;
        }
        
    }
    else {
        if (string2 < string3){
            if (string1 < string3){
                cout << string2 << ", " << string1 << ", " << string3;
            }
            else {
                cout << string2 << ", " << string3 << ", " << string1;
            }
        }
        else {
            cout << string3 << ", " << string2 << ", " << string1;
        }
    }
    
}

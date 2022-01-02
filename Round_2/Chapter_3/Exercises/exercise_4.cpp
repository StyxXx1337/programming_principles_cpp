// This program asks the user for 2 numers and 
// determines which one is lager and which one is smaller

#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    cout << "Please insert 2 numbers separated by a space: ";
    int first = 0;
    int second = 0;
    cin >> first >> second;

    if (first == second){
        cout << "You entered two times the same number: " << first << ".\n";
    }
    else if (first > second){
        cout << first << " is bigger than " << second << ".\n";
    }
    else{
        cout << second << " is bigger than " << first << ".\n";
    }
    

    return 0;
}
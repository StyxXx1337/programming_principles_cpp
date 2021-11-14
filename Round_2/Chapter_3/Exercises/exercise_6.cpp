// This programm prompts the user for 3 numbers and gives them back in order

#include "../../../!_Misc/std_lib_facilities.h"

int main(){
    cout << "Please insert 3 numbers separated by spaces: ";
    double first = 0;
    double second = 0;
    double third = 0;

    cin >> first >> second >> third;

    if (first <= second && first <= third){
        if (second <= third){
            cout << first << ", " << second << ", " << third;
        }
        else{
            cout << first << ", " << third << ", " << second;
        }
    }
    
    else if (second <= first && second <= third)
    {
        if (first < third){
            cout << second << ", " << first << ", " << third;
        }
        else{
            cout << second << ", " << third << ", " << first;
        }
    }
    
    else if (third <= first && third <= second)
    {
        if (first <= second){
            cout << third << ", " << first << ", " << second;
        }
        else{
            cout << third << ", " << second << ", " << first;
        }
    }

    return 0;
}
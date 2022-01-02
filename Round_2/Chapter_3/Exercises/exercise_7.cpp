// Same like exercise 6 but with strings.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){
    cout << "Please insert 3 strings separated by spaces: ";
    string first_string = " ";
    string second_string = " ";
    string third_string = " ";

    cin >> first_string >> second_string >> third_string;

    if (first_string <= second_string && first_string <= third_string){
        if (second_string <= third_string){
            cout << first_string << ", " << second_string << ", " << third_string;
        }
        else{
            cout << first_string << ", " << third_string << ", " << second_string;
        }
    }
    
    else if (second_string <= first_string && second_string <= third_string)
    {
        if (first_string < third_string){
            cout << second_string << ", " << first_string << ", " << third_string;
        }
        else{
            cout << second_string << ", " << third_string << ", " << first_string;
        }
    }
    
    else if (third_string <= first_string && third_string <= second_string)
    {
        if (first_string <= second_string){
            cout << third_string << ", " << first_string << ", " << second_string;
        }
        else{
            cout << third_string << ", " << second_string << ", " << first_string;
        }
    }

    return 0;
}
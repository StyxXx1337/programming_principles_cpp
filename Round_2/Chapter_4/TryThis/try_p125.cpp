// This program bleeps our several predefined words.


#include "../../../!_Misc/std_lib_facilities.h"

string dislike_1 = "Meat";
string dislike_2 = "Fish";
string dislike_3 = "Milk";

int main(){

    while(cin){
        string input = "";
        cin >> input;

        if (input == dislike_1){
            cout << "Bleeeep\n";
        }
        else if (input == dislike_2){
            cout << "Bleeeep\n";
        }
        else if (input == dislike_3){
            cout << "Bleeeep\n";
        }
        else {
            cout << input << endl;
        }
    }


    return 0;
}
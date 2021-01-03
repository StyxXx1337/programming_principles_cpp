#include "../../!_Misc/std_lib_facilities.h"

void check_numbers(int int_input, vector<string> string_names){
    
    for (int counter = 0; counter < string_names.size(); ++counter){
        if (int_input == counter){
            cout << "Your Input [" << int_input << "] is: " 
                << string_names[counter] << ".\n";
        }
    }
}

void check_string(string string_input, vector<string> string_names){
    
    for (int counter = 0; counter < string_names.size(); ++counter){
        if (string_input == string_names[counter]){
            cout << "Your Input [" << string_input << "] is: " 
                << counter << ".\n";
        }
    }
}


int main(){

    vector<string> string_names {"zero", "one", "two", "three", "four", "five", 
                                "six", "seven", "eight", "nine"};

    int user_choice;

    string string_input;
    int int_input;


    cout << "Please choose one option: \n"
        << "[1] for name to integer\n"
        << "[2] for integer to name\n";

    cin >> user_choice;

    if (user_choice == 1){
        cout << "Please input you string: ";
        cin >> string_input;
        check_string(string_input, string_names);
    }
    else if (user_choice ==2){
        cout << "Please input you integer: ";
        cin >> int_input;
        cout << '\n';
        check_numbers(int_input, string_names);
    }
    else {
        cout << "Please choose a correct option!";
    }


    return 0;
}
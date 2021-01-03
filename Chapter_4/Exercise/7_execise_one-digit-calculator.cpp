#include "../../!_Misc/std_lib_facilities.h"

int string_to_int(string input){
    vector<string> digit_names {"zero", "one", "two", "three", "four", "five", 
                                "six", "seven", "eight", "nine"};
    vector<string> digit_as_strings {"0", "1", "2", "3", "4", 
                                    "5", "6", "7", "8", "9"};
    
    int result = 99;

    for (int counter = 0; counter < digit_names.size(); ++counter){
        if (input == digit_names[counter]){
            return counter;
        }
    }

    for (int counter = 0; counter < digit_as_strings.size(); ++counter){
        if (input == digit_as_strings[counter]){
            return counter;
        }
    }

    simple_error("Input number not found in Vector");

}


int main(){

    char operandum;
    string input1, input2;

    cout << "This is a calcluator for single digit operations!\n"
        << "Please input your operator followed by 2 numbers: ";

    cin >> operandum >> input1 >> input2;

    switch(operandum){
        case ('+'):
            cout << "\nResult of your Addition: " 
                << (string_to_int(input1) + string_to_int(input2));
            break;
        case ('-'):
            cout << "\nResult of your Substraction: " 
                << (string_to_int(input1) - string_to_int(input2));
            break;
        case ('*'):
            cout << "\nResult of your Multiplication: " 
                << (string_to_int(input1) * string_to_int(input2));
            break;
        case ('/'):
            cout << "\nResult of your Division: " 
                << (string_to_int(input1) / string_to_int(input2));
            break;
        default:
            cout << "Wrong input";
            break;
    }

    return 0;
}
// This program is a simple calculator
// Please input digits or as string.
// It supports currently '+' '-' '/' and '*'.

#include "../../../!_Misc/std_lib_facilities.h"

vector<string> numbers {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<string> nums {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

int string_to_int(string num){
    int result = 99;

    for (int x = 0; x < numbers.size(); ++x){
        if (num == numbers[x]) result = x;
    }

    for (int x = 0; x < nums.size(); ++x){
        if (num == nums[x]) result = x;
    }

    return result;
}

int main(){

    char operation = '=';
    string number1 = " ";
    string number2 = " ";

    cout << "Please input two digits and an operation: ";
    while(cin >> number1 >> number2 >> operation){

        switch(operation){
            case('+'):
                cout << "The sum of " << number1 << " and "
                    << number2 << " is " 
                    << string_to_int(number1) + string_to_int(number2)
                    << ".\n";
                continue;
            case('-'):
                cout << "The difference of " << number1 << " and "
                    << number2 << " is " 
                    << string_to_int(number1) - string_to_int(number2)
                    << ".\n";
                continue;
            case('*'):
                cout << "The product of " << number1 << " and "
                    << number2 << " is " 
                    << string_to_int(number1) * string_to_int(number2)
                    << ".\n";
                continue;
            case('/'):
                cout << "The quotient of " << number1 << " and "
                    << number2 << " is " 
                    << string_to_int(number1) / float(string_to_int(number2))
                    << ".\n";
                continue;
            default:
                cout << "Unknown operation.";
                break;
        }
        break;

    }

    return 0;
}
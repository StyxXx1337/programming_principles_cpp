// This program is a simple calculator
// It supports currently '+' '-' '/' and '*'.


#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    char operation = '=';
    double number1 = .0;
    double number2 = .0;

    cout << "Please input two numbers and an operation: ";
    while(cin >> number1 >> number2 >> operation){

        if(operation == '+'){
            cout << "The sum of " << number1 << " and " 
                << number2 << " is " << number1+number2 << ".\n";
        }
        else if(operation == '-'){
            cout << "The difference of " << number1 << " and " 
                << number2 << " is " << number1-number2 << ".\n";
        }
        else if(operation == '/'){
            cout << "The quotient of " << number1 << " and " 
                << number2 << " is " << number1/number2 << ".\n";
        }
        else if(operation == '*'){
            cout << "The product of " << number1 << " and " 
                << number2 << " is " << number1*number2 << ".\n";
        }
        else{
            cout << "Wrong opertion... breaking up ...\n\n";
            break;
        }
        
        cout << "Please input two numbers and an operation: ";
    }

    return 0;
}
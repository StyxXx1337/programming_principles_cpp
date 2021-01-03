#include "../../!_Misc/std_lib_facilities.h"

int main(){

    char operandum;
    double number1{0};
    double number2{0};

    cout << "Please input a operator ['+', '-', '/', '*'] followed by 2 numbers: ";
    cin >> operandum >> number1 >> number2;

    if (operandum == '+'){
        cout << "The Sum of " << number1 << " and " << number2 << " is "
            << (number1+number2) << ".\n";
    }
    else if (operandum == '-'){
        cout << "The Difference of " << number1 << " and " << number2 << " is "
            << (number1-number2) << ".\n";
    }
    else if (operandum == '/'){
        cout << "The Quotient of " << number1 << " and " << number2 << " is "
            << (number1/number2) << ".\n";
    }
    else if (operandum == '*'){
        cout << "The Product of " << number1 << " and " << number2 << " is "
            << (number1*number2) << ".\n";
    }


}
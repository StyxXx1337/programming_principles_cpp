#include "../!_Misc/std_lib_facilities.h"

int main(){
    cout << "Please input an operator followed by two numbers: ";

    string opr;
    double number1, number2;

    cin >> opr >> number1 >> number2;

    if (opr == "+" || opr == "plus"){
        cout << "The result of " << number1 << " + " << number2 << " is: " << (number1 + number2);
    }
    else if (opr == "-" || opr == "minus"){
        cout << "The result of " << number1 << " - " << number2 << " is: " << (number1 - number2);
    }
    else if (opr == "*" || opr == "multiply"){
        cout << "The result of " << number1 << " * " << number2 << " is: " << (number1 * number2);
    }
    else if (opr == "/" || opr == "div"){
        cout << "The result of " << number1 << " / " << number2 << " is: " << (number1 / number2);
    }
    else if (opr == "%" || opr == "modulus"){
        cout << "The result of " << number1 << " % " << number2 << " is: " << (int(number1) % int(number2));
    }
    else{
        simple_error("Unknown Operation!!");
    }

    return 0;
}
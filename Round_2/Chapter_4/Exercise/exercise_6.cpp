// The program converts numbers to words of the letter

#include "../../../!_Misc/std_lib_facilities.h"

vector<string> numbers {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main(){

    cout << "Please input a digit you want to have converted: ";

    int digit = -1;

    while(cin >> digit){
        cout << "You entered: " << digit << " also known as " << numbers[digit] << ".\n";
    }

    return 0;
}
// This Program parses numbers and outputs the numbers in words.
// E.g. 123 one 1 hundred, 2 tens, 3 ones

/**
 * @file exercise_9.cpp
 * 
 * @author Kevin
 * @brief 
 * @version 0.1
 * @date 2021-10-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "../../../!_Misc/std_lib_facilities.h"

// Global vector for the words.
vector<string> magnitudes {"zero", "one", "ten", "hundred", "thousand", "tenthousand", "hundredthousand"};

int char_to_int(char ch){

    int result;
    result = ch - '0';

    return result;
}

string number_to_words(int value){
    string result;

    if (value == 0){
        return magnitudes[0];
    }
    else if (value < 0){
        // For time being negative values should be ignored.
        error("Please enter a positive value");
    }

    int index = 1;
    while (value > 0){
        int digit = value % 10;

        if (digit == 0){
            //skip to next number
        }
        else if (digit >= 1){
            string temp_string;
            string temp = magnitudes[index];
            temp_string = to_string(digit) + " " + temp;

            temp_string = (digit == 1) ? temp_string : temp_string + 's';
            
            if (result.size() == 0){
                result = temp_string;
            }
            else{
                result = temp_string + ' ' + result;
            }
        }
        else{
            // For debugging 
            cout << "Value: " << value << endl << "result: " << result;
            error("Error in Digit compilation.");
        }

        ++index;
        value /= 10;
    }

    return result;

}

int main(){

    cout << "Please insert you number you want to have put our: ";

    int value = 0;

    while(cin){
        char ch;
        cin >> ch;
        if (ch == ';') break;

        value *= 10;
        value += char_to_int(ch);
    }

    cout << value << " is " << number_to_words(value) << endl;

    return 0;
}
#include <iostream>
#include <limits>

#include "../../!_Misc/std_lib_facilities.h"

vector <int> integer_stream;

int integer_stream_sum(int amount_input){
    int sum;

    for (int i = 0; i < amount_input; ++i){
        sum += integer_stream[i];
    }

    return sum;
    
}

int integer_stream_checker(int amount_input){

    if (integer_stream.size() < amount_input){
        cout << "Less numbers than promissed.\n";
        return 1;
    }
    return 0;
}

int main(){
    
    int input = {0};
    int amount_input = 0;
    double sum = 0;

    do {
        cout << "Please enter the numbers of values you want to sum: ";

        if (!(cin >> amount_input)){
            cout << "Please input only numbers!\n";
            cin.clear();
            break;
        }
        
        cout << "Please enter some integers (press '|' to stopp):\n";

        do {
            if (!(cin >> input)){
                cout << "Please input only numbers!\n";
                integer_stream_checker(amount_input);
                break;
            }
            cin >> input;
            integer_stream.push_back(input);
        } while(true);

        cout << "The sum of the first " << amount_input << " numbers ( ";
        for (int j = 0; j < amount_input; ++j){
            cout << integer_stream[j] << ' ';
        }
        cout << ") is " << integer_stream_sum(amount_input) << ".\n";
    } while(true);
    // try {
    //     (cin >> amount_input);
    // }
    // catch (exception& e){
    //     simple_error("Please input an integer");
    // }
    
    // cout << "Please enter some integers (press '|' to stopp):\n";
    
    // while(cin >> input){

    //     integer_stream.push_back(input);
    // }

    // if (amount_input > integer_stream.size()){
    //     cout << "Not enough numbers.";
    // }

    // for (int i = 0; i < amount_input; ++i){
    //     sum += integer_stream[i];
    // }
    
    // cout << "The sum of the first " << amount_input << " numbers ( ";
    // for (int j = 0; j < amount_input; ++j){
    //     cout << integer_stream[j] << ' ';
    // }
    // cout << ") is " << sum << ".\n";
    
    return 0;
}
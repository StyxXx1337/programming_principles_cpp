// This program is to play a numbers game.
// The player thinks about a number and the program tries to guess it.
// It is based on Binary Search

#include "../../../!_Misc/std_lib_facilities.h"

constexpr int max_number = 100;
constexpr int min_number = 1;

int main(){

    bool answer_correct = false;
    int upper_limit = max_number;
    int lower_limit = min_number;

    cout << "Please think about a number between " << max_number 
        << " and " << min_number << ".\n";
    
    while(!answer_correct){
        int computer_guess = (upper_limit + lower_limit) / 2;

        cout << "Is your number: " << computer_guess << "?.\n"
            << "Did I hit it? [c]\n"
            << "Was it to high? [h]\n"
            << "Was it to low? [l]\n";

        char answer = 'x';

        cin >> answer;

        if (answer == 'c'){
            cout << "Yeah I nailed it! I knew it from the beginning it was " 
                << computer_guess << "!\n";
                answer_correct = true;
        }
        else if(answer == 'h'){
            cout << "Oh too high... \n";
            upper_limit = computer_guess - 1;
            answer_correct = false;
        }
        else if(answer == 'l'){
            cout << "Oh too low... \n";
            lower_limit = computer_guess + 1;
            answer_correct = false;
        }
        else{
            cout << "Invalid input.";
        }

    }

    return 0;
}


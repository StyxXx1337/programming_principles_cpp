#include "../../!_Misc/std_lib_facilities.h"

int main(){

    int minimum = 0;
    int maximum = 100;
    int pc_guess = 50;
    int number_of_guesses = 0;
    char user_answer = 'N';

    cout << "Please think of a number between 0 and 100: ";
    //cout << "READY???\n";

    while (user_answer != 'Y'){
        cout << "\nIs your number: " << pc_guess << " ?\n";
        ++number_of_guesses;
        cout << "[Y] Yes, [S] Smaller, [B] Bigger: ";
        cin >> user_answer;

        if ( (maximum - minimum) >= 2){
            if (user_answer == 'S'){
                maximum = pc_guess;
            }
            else if (user_answer == 'B'){
                minimum = pc_guess;
            }
            else if (user_answer == 'Y'){
                cout << "YEAH!!! I guessed it: " << pc_guess << "!!!!\n"
                    << "I got it in " << number_of_guesses << "!\n";
                break;
            }
            else{
                cout << "Please input a value option";
            }
            pc_guess = (((maximum - minimum) / 2) + minimum);
        }
        else{
            cout << "You guessed a strange number :-)...";
            break;
        }
    }
    


    return 0;
}
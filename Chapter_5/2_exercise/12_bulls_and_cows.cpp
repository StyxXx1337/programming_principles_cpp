#include "../../!_Misc/std_lib_facilities.h"
#include <chrono>

const int NUMBER_OF_DIGITS = 4;
const int LIFES_AT_START = 10;

void great_user(){
    cout << "Hello User. This game is called \"BULLS and COWS\".\n"
        << "We are searching for a number with " << NUMBER_OF_DIGITS << " digits.\n"
        << "If you guess one of the digits correct you will get a BULL.\n"
        << "If the numer is right but in the wrong spot you get a COW.\n"
        << "You have " << LIFES_AT_START << " lifes to find the right combination.";
}

bool user_wants_to_play(){

    char want_to_play = ' ';

    cout << "Do you want to play?\n [Y]es or [N]o?\n"
        << "> ";

    cin >> want_to_play;

    while(true){
        if (want_to_play == 'Y'){
            return true;
        }
        else if (want_to_play == 'N'){
            return false;
        }
        else{
            cin.ignore(INT_MAX, '\n');
            cin.clear();
            cout << "Please insert a valid choice!\n"
                << "[Y]es or [N]o?\n"
                << "> ";
            cin >> want_to_play;
        }
    }
}

string get_random_string(){
    int seed;
    seed = time(0);
    seed_randint(seed);

    int digit;
    string random_number {};

    for (int i = 0; i < NUMBER_OF_DIGITS; ++i){
        digit = randint(9);
        random_number += to_string(digit);
    } 
    
    return random_number;
}

void output_remaining_lifes(int remaining_lifes){
    
}

string get_guess_from_user(int remaining_lifes){
    string user_guess = "0";
    
    cout << "You have " << remaining_lifes << " lifes left.\n"
        << "What is your guess? \n> ";
    
    while (user_guess.size() != NUMBER_OF_DIGITS){
        cin >> user_guess;
        
        if ((user_guess.size() == NUMBER_OF_DIGITS) && (stoi(user_guess))){
            return user_guess;
        }
        else{
            cout << "\n++Please enter a " << NUMBER_OF_DIGITS << " digit long number.\n"
                << "> ";
        }
    }
}

void check_for_bulls_and_cows(string answer, string guess){
    int cows = 0;
    int bulls = 0;

    /// CHECK THIS LOOP ... not good yet.
    for (int counter_guess = 0; counter_guess < NUMBER_OF_DIGITS; ++counter_guess){
        for (int counter_answer = 0; counter_answer < NUMBER_OF_DIGITS; ++counter_answer){
            if (guess[counter_guess] == answer[counter_answer]){
                if(counter_guess == counter_answer){
                    ++bulls;
                }
                else{
                    ++cows;
                }
                answer[counter_answer] = 'X';
                break;
            }
        }
    }
    cout << "You have " << bulls << " BULLS and " << cows << " COWS.\n";
}

void game_main_loop(void){

    const string correct_answer = get_random_string();
    
    int remaining_lifes = LIFES_AT_START;
    string user_guess = "";

    while (remaining_lifes > 0){
        user_guess = get_guess_from_user(remaining_lifes);
        
        if (correct_answer == user_guess){
            cout << "Congrats! You have guessed correctly in only "
                << (LIFES_AT_START - (remaining_lifes-1)) << " Turns.\n\n";
            break;
        }
        
        check_for_bulls_and_cows(correct_answer, user_guess);
        --remaining_lifes;
        
    }
    
    if (remaining_lifes == 0){
        cout << "Sorry you lost.\n The correct answer was: " << correct_answer;
        cout << ".\n\n";
    }

}


int main(){

    great_user();

    while (true){
        if (user_wants_to_play()){
            cout << "Things are set\n"
                << "LET THE GAME BEGIN!\n\n";
            
            game_main_loop();

        }
        else {
            cout << "What a pitty.... little WUZ!";
            break;
        }
    }

    return 0;
}
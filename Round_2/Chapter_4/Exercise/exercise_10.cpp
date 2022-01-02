// This Program plays Rock, Paper and Scissors.
// Since Random was not in scope yet, we use a vector as input.

#include "../../../!_Misc/std_lib_facilities.h"

vector<char> moves {'R', 'P', 'S', 'R', 'P', 'R', 'S', 'R', 'R', 'P', 'P', 'S'};

bool game_choice(){

    char user_choice = ' ';

    cout << "Do you want to play a game of Rock-Paper-Scissors.\n"
        << "[Y]es or [N]o?\n";
    cin >> user_choice;
    if (user_choice == 'Y'){
        return true;
    }
    else{
        return false;
    }
}

string char_to_string(char in){
    switch(in){
        case 'P':
            return "Paper";
            break;
    
        case 'S':
            return "Scissors";
            break;
    
        case 'R':
            return "Rock";
            break;
    
        default:
            // raise error
            return "Unknown";
            break;
    }
}

string evaluate_winner(char user_choice, int move){
    switch(user_choice){
        case 'P':
            if (moves[move] == 'S'){
                return "PC";
            }
            else if (moves[move] == 'R'){
                return "Player";
            }
            else{
                return "Draw";
            }
            break;

        case 'S':
            if (moves[move] == 'R'){
                return "PC";
            }
            else if (moves[move] == 'P'){
                return "Player";
            }
            else{
                return "Draw";
            }
            break;

        case 'R':
            if (moves[move] == 'P'){
                return "PC";
            }
            else if (moves[move] == 'S'){
                return "Player";
            }
            else{
                return "Draw";
            }
            break;

        default:
            cout << "Strange Combination.\n";
            return "Unknown";
            break;
    }
}


int main(){
    int current_move = 0;
    bool want_to_play = true;

    cout << "Let's play a game! ... \n";
    want_to_play = game_choice();

    while (want_to_play == true){
        static char user_choice = 'N';
        cout << "Choose [R]ock, [P]aper, [S]cissors: \n";
        cin >> user_choice;

        string winner = evaluate_winner(user_choice, current_move);

        if (winner == "PC"){
            cout << "I won! ... You had " << char_to_string(user_choice)
                << " and I had " << char_to_string(moves[current_move]) << ".\n";
        }
        else if (winner == "Player"){
            cout << "You won ... You had " << char_to_string(user_choice)
                << " and I had " << char_to_string(moves[current_move]) << ".\n"
                << "Dork... \n";

        }
        else if (winner == "Draw"){
            cout << "We drew... We both had " << char_to_string(user_choice) << ".\n";
        }
        else{
            // Error
            cerr << "Error!";
        }

        ++current_move;

        want_to_play = game_choice();
    }

    cout << "Was nice playing with you!";
    return 0;
}
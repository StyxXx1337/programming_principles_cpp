#include "../../!_Misc/std_lib_facilities.h"


vector <char> pc_choices = {'R','P','S','P','P','S','P','S','S','R','S','R','S','P','R','S','R'};

char ask_user_for_new_game(){
        
    char game_choice;

    cout << "\n\n============================================\n";
    cout << "Want to start a 'Rock-Paper-Scissor' game?\n";
    cout << "[Y]es    [N]o: ";
    cin >> game_choice;
    if ((game_choice == 'N') || (game_choice == 'Y')){
        return game_choice;
    }
    else {
        //return an error
    }
    
}

string symbol_to_strings(char symbol){

    switch(symbol){
        case 'P':
            return "Paper";
            break;

        case 'R':
            return "Rock";
            break;

        case 'S':
            return "Scissors";
            break;

        default:
            return "Unknown";
            break;
    }

    return "test";
}

void winner_evaluation(char pc, char player){
    
    if (pc == player){
        cout << "The game ended in a draw!\n";
        cout << "The PC as well as the Player chose: " << symbol_to_strings(pc);   
    }
    else{
        switch (player)
        {
        case 'R':
            if (pc == 'S'){
                cout << "You won! PC chose: " << symbol_to_strings(pc) << '\n';
            }
            else if(pc == 'P'){
                cout << "You lost! PC chose: " << symbol_to_strings(pc) << '\n';
            }
            else{
                cout << "Strange combination!\nPC: " << pc 
                    << "\nPlayer: " << player << '\n';
            }
            break;

        case 'P':
            if (pc == 'R'){
                cout << "You won! PC chose: " << symbol_to_strings(pc) << '\n';
            }
            else if(pc == 'S'){
                cout << "You lost! PC chose: " << symbol_to_strings(pc) << '\n';
            }
            else{
                cout << "Strange combination!\nPC: " << pc 
                    << "\nPlayer: " << player << '\n';
            }
            break;

        case 'S':
            if (pc == 'P'){
                cout << "You won! PC chose: " << symbol_to_strings(pc) << '\n';
            }
            else if(pc == 'R'){
                cout << "You lost! PC chose: " << symbol_to_strings(pc) << '\n';
            }
            else{
                cout << "Strange combination!\nPC: " << pc 
                    << "\nPlayer: " << player << '\n';
            }
            break;

        default:
            cout << "Strange combination!\nPC: " << pc 
                    << "\nPlayer: " << player << '\n';
            break;
        }
    }
}

int main(){

    char game_choice = 'Y';
    char user_choice = ' ';
    int counter = 0;

    game_choice = ask_user_for_new_game();

    while (game_choice == 'Y'){
        cout << "[R]ock, [P]aper, [S]cissors. \nMake your choice: ";
        cin >> user_choice;

        winner_evaluation(pc_choices[counter], user_choice);
        game_choice = ask_user_for_new_game();
    }

    return 0;
}
// This is a simple implementation of the bull and cows game
// Currently it only support numbers without repeating digits.


#include "../../../!_Misc/std_lib_facilities.h"

vector<char> solution {'1','2','3','4'};
class LengthError { };

int check_for_bulls(vector<char> guess, vector<char> answer){

    if (guess.size() != answer.size()) throw LengthError();

    int bulls = 0;

    for (size_t i = 0; i < guess.size(); ++i){
        if (guess[i] == answer[i]) ++bulls;
    }
    
    return bulls;
}

int check_for_cows(vector<char> guess, vector<char> answer){
    
    if (guess.size() != answer.size()) throw LengthError();
    
    int cows = 0;

    for (size_t i = 0; i < guess.size(); ++i){
        for (size_t j = 0; j < answer.size(); ++j){
            if (i == j){
                // skip since it would be a Bull
            }
            else if (guess[i] == answer[j]){
                ++cows;
            }
        }
    }

    return cows;
}

int main(){

    cout << "Do you want to play a bull/cow game? [Y]es/[N]o: ";
    char play_a_game = 'X';
    cin >> play_a_game;

    int bulls = 0;
    int cows = 0;
    vector<char> guess (4);

    if (play_a_game == 'Y'){
        while((bulls < 4) && (guess[0] != '!')){
            cout << "Please insert your (four digit) guess or '|' to exit: ";
    
            char temp = ' ';
            int counter = 0;
            while(cin >> temp){
                if (temp == '|') break;
                if (counter >=4) throw LengthError();
                
                guess[counter] = temp;
                ++counter;
            }

            bulls = check_for_bulls(guess, solution);
            cows = check_for_cows(guess, solution);

            cout << "Bulls: " << bulls 
                << "\nCows: " << cows << endl;
            
            if (guess[0] == '|') break;

        }
    }

    return 0;
}
// This is a simple implementation of the bull and cows game
// Currently it only support numbers without repeating digits.


#include "../../../!_Misc/std_lib_facilities.h"

class LengthError { };
class BullCowsAmountError {};

int check_for_bulls(vector<int> guess, vector<int> answer){

    if (guess.size() != answer.size()) throw LengthError();

    int bulls = 0;

    for (size_t i = 0; i < guess.size(); ++i){
        if (guess[i] == answer[i]) ++bulls;
    }
    
    return bulls;
}

int check_for_cows(vector<int> guess, vector<int> answer){
    
    if (guess.size() != answer.size()) throw LengthError();
    
    int cows = 0;

    for (size_t i = 0; i < guess.size(); ++i){
        for (size_t j = 0; j < answer.size(); ++j){
            if (i == j){
                // skip since it would be a Bull
            }
            else if (guess[i] == answer[j]){
                ++cows;
                break;
            }
        }
    }

    return cows;
}

vector<int> get_answer(){

    vector<int> answer;

    for (size_t i = 0; i < 4; ++i){
        int temp = randint(10);
        answer.push_back(temp);
    }

    return answer;
}

bool game_over(int bulls, int cows){

    if ((bulls == 4) && (cows == 0)) return true;
    if ((bulls + cows) <= 4) return false;
    else throw BullCowsAmountError();
}

int main(){

    cout << "Do you want to play a bull/cow game? [Y]es/[N]o: ";
    char play_a_game = 'X';
    cin >> play_a_game;

    int bulls = 0;
    int cows = 0;

    if (play_a_game == 'Y'){

        vector<int> solution = get_answer();

        while(!game_over(bulls, cows)){
            cout << "Please insert your (four digit): ";
    
            int temp = 0;
            int counter = 0;
            vector<int> guess;
            cin >> temp;

            if (temp / 10000 >= 1) throw LengthError();
            else{
                guess.push_back(temp / 1000);
                temp %= 1000;
                guess.push_back(temp / 100);
                temp %= 100;
                guess.push_back(temp / 10);
                temp %= 10;
                guess.push_back(temp);
            }

            for (int el : solution){
                cout << "Elements: " << el << endl;
            }

            bulls = check_for_bulls(guess, solution);
            cows = check_for_cows(guess, solution);

            if(game_over(bulls, cows)){
                cout << "You won! Congrats!\n" << "The answer was: "
                    << solution[0] << ' ' << sol ution[1] << ' ' 
                    << solution[2] << ' ' << solution[3] << endl;
            }
            else{
                cout << "\nBulls: " << bulls 
                    << "\nCows: " << cows << endl;
            }

            guess.clear();
            cin.clear();
            

        }
    }

    return 0;
}
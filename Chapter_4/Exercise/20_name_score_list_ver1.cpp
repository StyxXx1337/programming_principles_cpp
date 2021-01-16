/*******************************************************************************
*
*------------------ Changed the Exercises 20 implementation. -------------------
*----------- Programm adds names and scores when name not in list --------------
*---------- If name in list, programm shows the score of the name --------------
*
*******************************************************************************/

#include    "../../!_Misc/std_lib_facilities.h"

static vector <string> names;
static vector <int> scores;


void add_new_items(string new_name, int new_score){
    
    scores.push_back(new_score);
    names.push_back(new_name);

}


void print_out_all(){
    if (scores.size() == names.size()){
        for (int i = 0; i < scores.size(); ++i){
            cout << "Name: " << names[i] << "\tScore: " << scores[i] << '\n';
        }
    }
}

void print_out_one(string name){
    for (int i = 0; i < names.size(); ++i){
            if (names[i] == name){
                cout << "Name: " << names[i] << "\tScore: " << scores[i] << '\n';
            }
        }
}


bool check_for_dublicates(string name){

    for (int i = 0; i < names.size(); ++i){
        if (names[i] == name){
            return true;
        }
    }
    return false;

}

void get_new_input(){

    string input_name = "None";
    int input_score = -1;
    char dublicate = 'N';

    while (true){

        cout << "Please input a name and a score combination: ";
        cin >> input_name;

        dublicate = check_for_dublicates(input_name);

        if (dublicate == false){
            cin >> input_score;
            add_new_items(input_name, input_score);
        }
        else if (dublicate == true){
            print_out_one(input_name);
        }
        else {
            cout << "WTF!!!!";
        }

        if ((input_name == "NoName" && input_score == 0)){
            break;
        }
    }
}


int main(){

    cout << "Hello to the Names & Scores Database.\n"
        << "Here you will be able to store names and related scores.\n\n"; 

    get_new_input();
    print_out_all();

    return 0;
}

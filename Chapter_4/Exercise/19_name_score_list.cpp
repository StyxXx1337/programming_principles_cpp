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


char check_for_dublicates(string name){

    for (int i = 0; i < names.size(); ++i){
        if (names[i] == name){
            return 'Y';
        }
    }
    return 'N';

}

void get_new_input(){

    string input_name = "None";
    int input_score = -1;
    char dublicate = 'N';

    while (true){

        cout << "Please input a name and a score combination: ";
        cin >> input_name >> input_score;

        if ((input_name == "NoName" && input_score == 0)){
            break;
        }

        dublicate = check_for_dublicates(input_name);

        if (dublicate == 'N'){
            add_new_items(input_name, input_score);
        }
        else if (dublicate == 'Y'){
            print_out_all();
            simple_error("Already existing name!");
        }
        else {
            cout << "WTF!!!!";
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

#include    "../../!_Misc/std_lib_facilities.h"

static vector <string> names;
static vector <int> scores;


class Name_value{
    public:
        string name;
        int score;
    Name_value(string n, int s){
        name = n;
        score = s;
    }
};

static vector <Name_value> data_list;

void add_new_items(string new_name, int new_score){
    
    data_list.push_back(Name_value(new_name, new_score));

}


void print_out_all(){
    for (int i = 0; i < data_list.size(); ++i){
        cout << "Name: " << data_list[i].name << "\tScore: " 
            << data_list[i].score << '\n';
    }
}


char check_for_dublicates(string name){

    for (int i = 0; i < data_list.size(); ++i){
        if (data_list[i].name == name){
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

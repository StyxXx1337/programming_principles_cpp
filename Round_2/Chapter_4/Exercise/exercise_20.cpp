// This program takes a first name and an age and safes it.
// No dublicated names are accepted.
// Program ends, when "NoName" with the age '0' is entered.
// Afterwards you can search for names in the list and 
// the program will output the corresponding age if found. Otherwise you get an error message.

#include "../../../!_Misc/std_lib_facilities.h"

const string cancel_name = "NoName";
constexpr int cancel_age = 0;

void print_result(vector<string> names, vector<int> ages){

    if (names.size() != ages.size()){
        //raise Error
        return;
    }

    for (int x = 0; x < (names.size()-1); ++x){
        cout << names[x] << " \t " << ages[x] << endl;
    }

    return;
}

bool dublicates_in_vector(vector<string> names, string name){

    for(string n : names){
        if (n == name){
            simple_error("Name already entered. \nClosing the program...");
        }
    }
    return false;
}

int search_in_vector(vector<string> names, string name){

    for (int x = 0; x < names.size(); ++x){
        if (names[x] == name){
            return x;
        }
    }

    return -1;
}

int main(){

    string name = " ";
    int age = -1;

    vector<string> names;
    vector<int> ages;


    while((name != cancel_name) && (age != cancel_age)){
        cout << "Please input a name and age: ";
        cin >> name >> age;

        if (!dublicates_in_vector(names, name)){
            names.push_back(name);
            ages.push_back(age);
        }
        else{
            break;
        }
        
    }

    cout << "Please insert the name you want to search: ";
    cin >> name;

    int id = 0;

    id = search_in_vector(names, name);
    if (id >= 0){
        cout << names[id] << " \t " << ages[id] << endl;
    }
    else{
        cout << "Name not found..." << endl;
    }
    
    return 0;
}
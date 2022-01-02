// This program takes a first name and an age and safes it.
// No dublicated names are accepted.
// Program ends, when "NoName" with the age '0' is entered.
// Afterwards it prints out the names and ages.

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

    print_result(names, ages);
    
    return 0;
}
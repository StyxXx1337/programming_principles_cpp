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

vector<int> ages_in_vector(vector<int> ages, int age){

    vector<int> ids;

    for (int x = 0; x < ages.size(); ++x){
        if (ages[x] == age){
            ids.push_back(x);
        }
    }
    return ids;
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

    cout << "Please insert the age you want to search: ";
    cin >> age;

    vector<int> id;

    id = ages_in_vector(ages, age);

    if (id.size() > 0){
        for (int i : id){
            cout << names[i] << " \t " << ages[i] << endl;
        }
    }
    else{
        cout << "Name not found..." << endl;
    }
    
    return 0;
}
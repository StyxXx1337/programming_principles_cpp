// This program takes a first name and an age and safes it.
// No dublicated names are accepted.
// Program ends, when "NoName" with the age '0' is entered.
// Afterwards it prints out the names and ages.

#include "../../../!_Misc/std_lib_facilities.h"

const string cancel_name = "NoName";
constexpr int cancel_age = 0;

class Name_value{

    public:
        string name;
        int value;
        Name_value(string aname, int age){
            name = aname;
            value = age;
        }
};

void print_result(vector<Name_value> names){

    for (int x = 0; x < (names.size()-1); ++x){
        cout << names[x].name << " \t " << names[x].value << endl;
    }
}

bool dublicates_in_vector(vector<Name_value> names, string name){

    if (names.size() == 0) return false;
    for(int x = 0; x < (names.size()-1); ++x){
        if (names[x].name == name){
            simple_error("Name already entered. \nClosing the program...");
            return true;
        }
    }
    
    return false;
}

int main(){

    string name = " ";
    int age = -1;

    vector<Name_value> names;

    while((name != cancel_name) && (age != cancel_age)){
        cout << "Please input a name and age: ";
        cin >> name >> age;

        if (!dublicates_in_vector(names, name)){
            Name_value temp = Name_value(name, age);
            names.push_back(temp);
        }
        else{
            break;
        }
        
    }

    print_result(names);
    
    return 0;
}
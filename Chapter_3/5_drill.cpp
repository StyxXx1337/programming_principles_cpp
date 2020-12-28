#include "../!_Misc/std_lib_facilities.h"


int main(){

    cout << "Please insert you firstname: ";
    string firstname;

    cin >> firstname;

    cout << "Hello, " << firstname << ".\n\n"
        << "How are you?\n"
        << "I am fine, but it is a little bit boring here.\n";

    cout << "Please insert a friends name: ";
    string friends_name;

    cin >> friends_name;

    cout << "Have you seen " << friends_name << " recently?\n";
    cout << "What is the sex of your friend? (m)ale or (f)emale: ";

    char sex {0};
    cin >> sex;

    if (sex == 'm'){
        cout << "\n Please tell him to call me. If you see " << friends_name
            << " again. Thank you.\n";
    }
    else
    {
        cout << "\n Please tell her to call me. If you see " << friends_name
            << " again. Thank you.\n";
    }
    
    cout << "How old is your friend?\n"
        << "Please enter the age: ";
    int age{0};

    cin >> age;

    if ((age <= 0) || (age >= 110)){
        simple_error("You got to be kidding!");
    }
    else if (age < 12){
        cout << "Next year you will be " << age <<" years old\n";
    }
    else if (age == 17){
        cout << "Next year can vote!\n";
    }
    else if (age > 70){
        cout << "I hope you enjoy your retirement\n";
    }
    else{
        cout << "You are " << age << " years old.";
    }

}
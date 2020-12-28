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
    

}
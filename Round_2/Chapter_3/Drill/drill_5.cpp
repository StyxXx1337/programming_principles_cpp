// This is the Drill number 5
// Target is to write a letter and ask the user for its name.
// Also added some additional lines.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    cout << "Please enter the name to the person you write: ";
    string first_name = " ";
    cin >> first_name;
    cout << "Enter a name of a friend: "; 
    string friend_name = " ";
    cin >> friend_name;
    cout << "Is your friend [m]ale of [f]emale: ";
    char friend_sex = ' ';
    cin >> friend_sex;
    cout << "What is your age?: ";
    int age = 0;
    cin >> age;
    
    if (age < 0 || age > 110){
        simple_error("You gotta be kidding...");
    }
    
    cout << "\n\nDear, " << first_name << ",\n"
            << "How are you? I am fine. I miss you.\n"
            << "How is life in the US?\nHere in Japan is great weather.\n"
            << "Hope to see you soon again after COVID.\n"
            << "Have you seen " << friend_name << " lately?\n";
    
    if (friend_sex == 'm'){
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
    else{
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }
    cout << "I heard you just had birthday and turned " << age <<".\n"
            << "Congratulations!\n";
    cout << "All the best, \n\nMike.";
}
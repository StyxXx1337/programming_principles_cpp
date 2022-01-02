// This is the Drill number 3
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
    
    cout << "\n\nDear, " << first_name << ",\n"
            << "How are you? I am fine. I miss you.\n"
            << "How is life in the US?\nHere in Japan is great weather.\n"
            << "Hope to see you soon again after COVID.\n"
            << "Have you seen " << friend_name << " lately?\n"
            << "All the best, Mike.";
}
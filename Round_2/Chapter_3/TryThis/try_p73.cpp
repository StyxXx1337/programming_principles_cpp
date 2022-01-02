// This is the Try This box from Chapter 3 page 73.
// This program checks an input and sees how many double words are there.
// Use this as example: She she laughed He He He because what he did di not look very very good good

#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    string previous = " ";
    string current;
    while (cin>>current){
        if(previous == current)
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
}
#include "../../../!_Misc/std_lib_facilities.h"

void print_until_s(vector<string> v, string quit){

    for (string s: v){
        if(s==quit) return;
        cout << s << '\n';
    }
}

void print_until_ss(vector<string> v, string quit){
    int counter = 0;

    for (string s: v){
        if(s==quit) counter++;
        if (counter == 2) return;
        cout << s << '\n';
    }
}

int main(){

    vector<string> test1 {"This", "is", ".", "a", "test", ".", "."};
    print_until_s(test1, ".");
    print_until_ss(test1, ".");

    return 0;
}
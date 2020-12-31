#include "../!_Misc/std_lib_facilities.h"

int main(){

    char character = 'A';

    while (character <= 'Z'){
        cout << character << "\t" << int(character) << "\n";
        ++character;
    }


}
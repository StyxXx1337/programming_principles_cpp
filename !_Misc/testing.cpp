// This is for playing around and test some code snippets


#include "std_lib_facilities.h"
#include "typeinfo"

vector<string> magnitudes {"zero", "one", "ten", "hundred", "thousand", "tenthousand", "hundredthousand"};

int main(){

    int integer = -101;
    string temp = "Hello";
    temp += magnitudes[0];
    cout << "Type: " << typeid(magnitudes[0]).name() << endl;
    cout << "Value: " << temp << endl;

    return 0;
}
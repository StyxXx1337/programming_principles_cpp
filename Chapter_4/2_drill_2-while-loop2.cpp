#include "../!_Misc/std_lib_facilities.h"

int main(){

    int input1;
    int input2;

    while(cin >> input1 >> input2){
        if (input1 < input2){
            cout <<"The smaller input: " << input1 << " & the larger input: " << input2;
        }
        else if (input2 < input1){
            cout <<"The smaller input: " << input2 << " & the larger input: " << input1;
        }
        else {
            cout <<"You input 2 times the same number: " << input1;
        }
        
    }

    return 0;
}
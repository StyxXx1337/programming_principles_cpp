#include "../!_Misc/std_lib_facilities.h"

int main(){

    double input1;
    double input2;

    while(cin >> input1 >> input2){
        if ( (input1 + 1.0/100.0) < input2){
            cout <<"The smaller input: " << input1 << " & the larger input: " << input2;
        }
        else if ((input2 + 1.0/100) < input1){
            cout <<"The smaller input: " << input2 << " & the larger input: " << input1;
        }
        else if (input1 == input2){
            cout <<"You input 2 times the same number: " << input1;
        }
        else{
            cout <<"The two numbers are almost equal: " << input1 << " & " << input2;
        }
        
    }

    return 0;
}
#include "../!_Misc/std_lib_facilities.h"

int main(){

    double input;
    double smallest{};
    double largest{};

    while(cin >> input){
        if (input > largest){
            cout << "Until now the largest number was: " << largest 
            << "\nYour number was bigger: " << input << '\n';
            largest = input;
        }
        else if (input < smallest){
            cout << "Until now the smallest number was: " << smallest
            << "\nYour number was smaller: " << input << '\n';
            smallest = input;
        }
        else{
            cout << "No change.\n"
                << "Largest number is: " << largest
                << "\nSmallest number is: "<< smallest << '\n';
        }
    }   

    return 0;
}
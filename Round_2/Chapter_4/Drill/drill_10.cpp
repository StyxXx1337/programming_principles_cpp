// This program takes an number and a unit as long as numbers are entered.
// It terminates otherwise.
// The unit supported are cm, m, in, ft.
// When the highest number so far is entered it prints it out.
// Same with the lowest number

#include "../../../!_Misc/std_lib_facilities.h"

double get_sum(vector<double> vec){
    double sum = 0;
    for(double n : vec){
        sum += n;
    }
    return sum;
}


int main(){

    double largest = -999999; // To be sure the number is overwritten by any number
    double smallest = 999999; // See above
    double number = 0;
    string unit = " ";
    vector<double> sum;


    cout << "Please insert a number with a unit: ";

    while(cin >> number >> unit){
        
        if (unit == "m"){
            number = number;
        }
        else if(unit == "cm"){
            number /= 100;
        }
        else if(unit == "ft"){
            number *= 2.54/100;
        }
        else if(unit == "in" ){
            number *= 0.0328084/100;
        }
        else{
            simple_error("Illegal unit.");
        }
        
        sum.push_back(number/100);
        
        if (number > largest){
            cout << "This is the largest number so far: " << number << "m.\n";
            largest = number;
        }
        if(number < smallest){
            cout << "This is the smallest number so far: " << number << "m.\n";
            smallest = number;
        }

        cout << "\nPlease insert a number: ";
    }

    cout << "The sum entered is: " << get_sum(sum) << "m.\n"
        << "You entered " << sum.size() << " numbers.\n";

    return 0;
}
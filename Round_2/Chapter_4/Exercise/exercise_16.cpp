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

double get_mode(vector<double> vec){
    sort(vec);

    int instances = 0;
    int max = 0;
    double max_number = .0;
    double last_number = .0;

    for (double x : vec){
        if (last_number == x){
            ++instances;
            if (instances >= max){
                max = instances;
                max_number = x;
            }
        }
        else{
            instances = 1;
            last_number = x;
        }
    }
    cout << "Max number is: " << max_number << " included " << max << "times.\n";
    
    return max_number;
}

int main(){

    double largest = -999999; // To be sure the number is overwritten by any number
    double smallest = 999999; // See above
    double number = 0;
    vector<double> sum;


    cout << "Please insert a number: ";

    while(cin >> number){
        
        sum.push_back(number);
        
        if (number > largest){
            cout << "This is the largest number so far: " << number << ".\n";
            largest = number;
        }
        if(number < smallest){
            cout << "This is the smallest number so far: " << number << ".\n";
            smallest = number;
        }

        cout << "\nPlease insert a number: ";
    }

    cout << "The sum entered is: " << get_sum(sum) << ".\n"
        << "You entered " << sum.size() << " numbers.\n";

    cout << "The mode of numbers you enteres is: " << get_mode(sum) << ".\n";

    return 0;
}
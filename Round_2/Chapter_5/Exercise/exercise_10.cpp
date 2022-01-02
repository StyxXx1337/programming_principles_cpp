// This program takes a number and asks for a stream of numbers.
// After input ends, the sum of the of the first numbers.
// It checks for INT Overruns.

#include "../../../!_Misc/std_lib_facilities.h"

class ToLessElements { };

int main(){

    cout << "Please enter the number of values you want to sum:";
    int numbers_to_sum = 0;

    cin >> numbers_to_sum;

    cout << "Please enter some integers (press '|' to stop): ";
    
    double temp = 0;
    vector<double> nums;
    vector<double> adjacent_sums;

    while (cin >> temp){
        nums.push_back(temp);
        if (nums.size() > 1) {
            adjacent_sums.push_back(nums[nums.size() - 1] + nums[nums.size() - 2]);
        }
    }

    if (numbers_to_sum > nums.size()) throw ToLessElements();

    double sum = 0;
    for (double i = 0; i < numbers_to_sum; ++i){
        sum += nums[i];
    }

    cout << "The sum of the " << numbers_to_sum << " numbers is: " << sum << ".\n";
    for (double x : adjacent_sums){
        cout << "The sum of the adjacent elements are: " << x << ".\n";
    }

    return 0;
}
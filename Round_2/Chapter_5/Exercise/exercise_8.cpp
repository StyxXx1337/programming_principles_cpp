// This program takes a number and asks for a stream of numbers.
// After input ends, the sum of the of the first numbers.

#include "../../../!_Misc/std_lib_facilities.h"

class ToLessElements { };

int main(){

    cout << "Please enter the number of values you want to sum:";
    int numbers_to_sum = 0;

    cin >> numbers_to_sum;

    cout << "Please enter some integers (press '|' to stop): ";
    int temp = 0;
    vector<int> nums;
    while (cin >> temp){
        nums.push_back(temp);
    }

    if (numbers_to_sum > nums.size()) throw ToLessElements();

    int sum = 0;
    for (int i = 0; i < numbers_to_sum; ++i){
        sum += nums[i];
    }

    cout << "The sum of the " << numbers_to_sum << " numbers is: " << sum << ".\n";

    return 0;
}
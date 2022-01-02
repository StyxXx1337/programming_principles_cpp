// This program takes doubles as long as there is a valid input.
// Afterwards it computes the sum and the mean and puts out together with the numbers.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    vector<double> numbers;
    for (double number; cin >> number; ){
        numbers.push_back(number);
    }
    
    cout << "[ ";
    for (double x : numbers) cout << x << ", ";
    cout << " ]";

    double sum = 0;
    for (double x : numbers) sum += x;
    cout << "\nAverage number: " << sum / numbers.size() << ".\n";

    sort(numbers);
    cout << "Size: " << numbers.size() << endl;
    cout << "Median number: " << numbers[(numbers.size() - 1) / 2] << ".\n";


    return 0;
}
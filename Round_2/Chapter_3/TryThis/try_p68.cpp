// This is the Try This box from Chapter 3 page 68.
// This program asks the user to enter a number and outputs several calcualtions.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){
    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n== " << n
        << "\nn+1 == " << n+1
        << "\nthree times n == " << n*3
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nhalf n == " << n/2
        << "\nsquare root of n == " << sqrt(n)
        << '\n';
}
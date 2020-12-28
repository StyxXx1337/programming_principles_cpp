#include "../!_Misc/std_lib_facilities.h"

int main(){

    cout << "Please enter a floating point number: ";
    double n;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 == " << n+1
        << "\nthree times n == " << 3*n
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nhalf of n == " << n/2
        << "\nsquare roots of n == " << sqrt(n)
        << '\n';

}
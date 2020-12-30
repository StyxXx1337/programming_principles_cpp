#include "../!_Misc/std_lib_facilities.h"

int main(){
    int pennies, nickels, dimes, quaters, half, dollars;
    double sum;
    

    cout << "How many pennies do you have? ";
    cin >> pennies;

    cout << "How many nickels do you have? ";
    cin >> nickels;

    cout << "How many dimes do you have? ";
    cin >> dimes;

    cout << "How many half-dollars do you have? ";
    cin >> half;

    cout << "How many dollars do you have? ";
    cin >> dollars;

    sum = pennies + (nickels*5) + (dimes * 10) + (quaters * 25) + (half * 50) + (dollars * 100);

    cout << "You have " << sum << " pennies. That is equalt to: " << (sum/100) << "$."; 
    
}
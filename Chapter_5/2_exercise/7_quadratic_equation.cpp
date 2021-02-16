/*******************************************************************************
 * This Program solves quadratic equaton with the a,b,c Formular
 * Formular is as follows: 
 * 
 *                 -b + sqrt(b^2 - 4ac)
 *       x_one = ------------------------
 *                       2a
 * 
 * *               -b - sqrt(b^2 - 4ac)
 *       x_two = ------------------------
 *                       2a
 * 
 * 
*/

#include "../../!_Misc/std_lib_facilities.h"

double calculate_under_root(double a, double b, double c){
    // calculate the value for the root: sqrt(>>> b^2 - 4ac <<<)

    double result = 0.0;

    result = ((b*b) - (4 * a * c));

    return result;
}

int main(){

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double value_below_root = 0.0;
    double x_one = 0.0;
    double x_two = 0.0;
    
    cout << "This programm solves quadratic equations of the following form: \n"
        << " \t\tax^2 + bx + c = 0\n"
        << "Please insert your values for 'a', 'b' & 'c': ";
    
    cin >> a >> b >> c;

    value_below_root = calculate_under_root(a, b, c);

    if (value_below_root < 0){
        simple_error("Result is below 0. No Real solutions for this equation");
    }
    else if (value_below_root == 0){
        x_one = ((-b) / (2 * a));
        cout << "Your equation has only one solution: " << x_one;
    }
    else{
        x_one = (((-b) + sqrt(value_below_root)) / (2 * a));
        x_two = (((-b) - sqrt(value_below_root)) / (2 * a));
        cout << "Your equation has two solution: 1. " << x_one
            << "\t2. " << x_two;
    }

    return 0;
}
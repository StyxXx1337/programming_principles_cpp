Leade#include "../../!_Misc/std_lib_facilities.h"


vector <double> abc_formular(int a, int b, int c){
    
    vector<double> solutions = {}; 
    double root = 0;

    root = (b*b - 4*a*c);
    
    if (root < 0){
        // no "REAL" solution for this equation.
    }
    else if (root == 0){
        solutions.push_back((-b)/(2*a));
    }
    else {
        solutions.push_back(((-b)+sqrt(root))/(2*a));
        solutions.push_back(((-b)-sqrt(root))/(2*a));
    }
    
    return solutions;
}

int main(){

    double a = 0;
    double b = 0;
    double c = 0;

    vector<double> solutions = {};

    cout << "==== This programm solves a equation in the form ====\n"
        << "                   ax^2 + bx + c = 0                  \n"
        << "Please input a, b and c divided by a space: ";

    cin >> a >> b >> c;

    solutions = abc_formular(a, b, c);

    if (solutions.size() == 0){
        cout << "For this equation there is no solution.\n"
            << "[ "<< a << "x^2 + (" << b << ")x + (" << c << ") = 0 ] is not solvable.";
    }
    else if (solutions.size() == 1){
        cout << "For this equation the solution is: " << solutions[0] << ".\n"
            << "[ "<< a << "x^2 + (" << b << ")x + (" << c << ") = 0 ]";
    }
    else if (solutions.size() == 2){
        cout << "For this equation there is the solutions are: " << solutions[0] << " and " << solutions[1] << ".\n"
            << "[ "<< a << "x^2 + (" << b << ")x + (" << c << ") = 0 ]";
    }
    else{
        error("too many solutions");
    }

    return 0;
}
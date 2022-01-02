// This program solves a quadratic equation.

#include "../../../!_Misc/std_lib_facilities.h"

class NegativeRoot { };

double root_of_abc(double a, double b, double c){

    double res = .0;
    res = sqrt((b*b) - (4*a*c));

    if (isnan(res)){
        cerr << "The root has no real solution.\n";
        throw NegativeRoot();
    }
    
    return res;
}

vector<double> solve_quadratic_equation(double a, double b, double c){

    double root = root_of_abc(a,b,c);
    
    vector<double> res;
    if (root == 0){
        double temp = -b / (2*a);
        res.push_back(temp);
    }
    else{
        double temp = (-b + root) / (2*a);
        res.push_back(temp);
        temp = (-b - root) / (2*a);
        res.push_back(temp);
    }

    return res;
}

void output_solution(vector<double> solutions){

    if (solutions.size() == 0){
        cout << "There is no rational solution for your solution.";
    }
    else if(solutions.size() == 1){
        cout << "There is one solution to your equation:" 
            << "\nx(1)=" << solutions[0] << ".\n";
    }
    else if(solutions.size() == 2){
        cout << "There are two solution to your equation:"
            << "\nx(1)=" << solutions[0] 
            << "\nx(2)=" << solutions[1] << ".\n";
    }

}

int main(){

    cout    << "=================================================\n"
            << "This programm solves a quadratic equation.\n"
            << "=================================================\n"
            << "Please enter a, b and c of the quadratic equation\n"
            << " a * x^2 + b * x + c = 0 \n"
            << ">> ";
    
    double a = 0;
    double b = 0;
    double c = 0;

    cin >> a >> b >> c;

    vector<double> solutions;
    solutions = solve_quadratic_equation(a, b, c);
    
    output_solution(solutions);
    
    return 0;
}
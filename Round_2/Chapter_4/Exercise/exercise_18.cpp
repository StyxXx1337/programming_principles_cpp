// This program returns the solution for a quadratic equation

#include "../../../!_Misc/std_lib_facilities.h"

vector<double> solve_quadratic_equation(double a, double b, double c){

    double determination = 0;
    determination = (b*b) - (4.0 * a * c);
    
    cout << "Determination: " << determination << endl;

    vector<double> solutions;

    if (determination < 0){
        return solutions;
    }
    else if(determination == 0){
        
        double solution = -b / (2.0*a);
        solutions.push_back(solution);

        return solutions;
    }
    else{
        determination = sqrt(determination);
        
        double solution = (-b + determination) / (2.0*a);
        solutions.push_back(solution);
        solution = (-b - determination) / (2.0*a);
        solutions.push_back(solution);
        
        return solutions;
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

    vector<double> solutions = solve_quadratic_equation(a, b, c);

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

    return 0;
}
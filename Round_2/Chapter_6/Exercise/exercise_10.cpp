// This program asks the user for 2 numbers and 
// calculates the permutation or combination of those two numbers.  

#include "../../../!_Misc/std_lib_facilities.h"

struct Calculation{
    int first_number = 0;
    int second_number = 0;

    // P for permutation and C for combination
    char calc_type = 'X';
};

Calculation prompt_user(){
    Calculation c;

    cout << "Hello User, this program will calculate for you the Permutation or Combination.\n"
        << "Please insert two numbers: ";
    cin >> c.first_number >> c.second_number;

    cout << "If you want to calculate the permutation enter \"P\", for Combination enter \"C\":";
    cin >> c.calc_type;

    return c;
}

double calc_factorial(int value){

    if (value == 0) return 1;

    double result = 1;
    for (int i = 1; i <= value; ++i){
        result *= i;
    }

    return result;
}

double calc_permutation(int a, int b){
    // Formular: P(a,b) = a! / (a-b)!
    if (a < b) error("A must be bigger than B");
    if (a < 0 || b < 0) error("Negative permutation not possible.");
    
    double result = 0;
    result = calc_factorial(a) / calc_factorial(a - b);

    return result;
}

double calc_combination(int a, int b){
    // Formular: C(a,b) = P(a,b) / b!
    if (a < b) error("A must be bigger than B");
    if (a < 0 || b < 0) error("Negative combination not possible.");
    
    double result = calc_permutation(a, b) / calc_factorial(b);
    return result;
}

int main(){
    Calculation c;
    c = prompt_user();

    double result = 0;
    int a = c.first_number;
    int b = c.second_number;

    if (c.calc_type == 'P'){
        cout << "The result of the Permuation of P(" << c.first_number << "," 
            << c.second_number << ") is: " << calc_permutation(a, b) <<".\n";
    }
    else if (c.calc_type == 'C'){
        cout << "The result of the Combination of C(" << c.first_number << "," 
            << c.second_number << ") is: " << calc_combination(a, b) <<".\n";
    }
    else{
        error("Unknow Calculation Type");
    }

    return 0;
}

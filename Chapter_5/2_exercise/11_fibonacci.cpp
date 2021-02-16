#include "../../!_Misc/std_lib_facilities.h"

void print_vector(vector<int> fib){
    
    for (int i = 0; i < fib.size(); ++i){
        if (i > 0){
            cout << ' ';
        }
        cout << fib[i];
    }
}


void get_next_fibonacci(vector<int> &fib){
    int next_number;

    next_number = (fib[fib.size()-2] + fib[fib.size()-1]);
    if (next_number > 0){
        fib.push_back(next_number);
    }
    else{
        print_vector(fib);
        cout << '\n';
        simple_error("Integer Overflow...");
    }

}

vector <int> get_fibonacci_numbers(int amount){
    vector <int> fibonacci = {1, 1};

    if (amount == 2){
        return fibonacci;
    }
    else if (amount == 1){
        fibonacci = {1};
        return fibonacci;
    }
    else if (amount < 1) {
        simple_error("Please insert a valid amount.");
    }

    while (fibonacci.size() < amount){

        get_next_fibonacci(fibonacci);

    }
    return fibonacci;

}

int main(){

    vector <int> fibonacci = {1, 1};

    cout << "This Program will output the first X-Numbers of the Fibonacci numbers.\n"
        << "How many numbers do you want to have print? Insert here: ";
    
    int amount_of_fibinacci_numbers;
    cin >> amount_of_fibinacci_numbers;

    fibonacci = get_fibonacci_numbers(amount_of_fibinacci_numbers);
    print_vector(fibonacci);

    return 0;
}
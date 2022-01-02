#include "../../../!_Misc/std_lib_facilities.h"

void print(string label, const vector<int>& list){

    std::cout << label << endl;
    for (int i : list){
        std::cout << i << endl;
    }
}

void fibonacci(int last, int current, vector<int>& list, int amount){
    
    if (list.size() > 0) error("handed list is not empty");

    list.push_back(last);
    list.push_back(current);

    for (size_t i = 2; i < amount; ++i){
        int next = last + current;
        list.push_back(next);

        last = current;
        current = next;
    }

}

int main(){
    
    int first_fib = 1;
    int second_fib = 1;
    vector<int> fib;

    fibonacci(first_fib, second_fib, fib, 20);

    print("This is the Fibonacci list:", fib);

    return 0;
}
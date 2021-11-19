#include "../../../!_Misc/std_lib_facilities.h"

double maxv(const vector<double>& vec){
    if (vec.size() == 0) error("vector is empyt.");

    double max = vec[0];

    for (size_t i = 0; i < vec.size(); ++i){
        if (vec[i] > max){
            max = vec[i];
        }
    }

    return max;
}

int main(){

    vector<double> test1 {1,2,3,4,5,6,7,8,100,200,300,1000};

    vector<double> test2 {1,2,5,4,3,2,1};
    vector<double> empty_vec {};

    cout << "Test 1: " << maxv(test1) << ".\n";
    cout << "Test 2: " << maxv(test2) << ".\n";
    cout << "Error test: " << maxv(empty_vec) << ".\n";

    return 0;
}
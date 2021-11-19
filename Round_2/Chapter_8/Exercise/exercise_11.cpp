#include "../../../!_Misc/std_lib_facilities.h"

struct result {
    double max;
    double min;
    double mean;
};

result vec_test(const vector<double>& vec){
    //@brief: calculates the max, min and mean and returns a struct.
    if (vec.size() == 0) error("vector is empty.");

    result res;
    res.max = vec[0];
    res.min = vec[0];
    res.mean = 0;

    for (double x : vec){
        res.max = (x > res.max) ? x : res.max;
        res.min = (x < res.min) ? x : res.min;
        res.mean += x;
    }

    res.mean /= vec.size();

    return res;
}

void vec_ref(const vector<double>& vec, double& max, double& min, double& mean){
    //@brief: calculates the max, min and mean and returns by reference.
    if (vec.size() == 0) error("vector is empty.");

    result res;
    max = vec[0];
    min = vec[0];
    mean = 0;

    for (double x : vec){
        max = (x > max) ? x : max;
        min = (x < min) ? x : min;
        mean += x;
    }

    mean /= vec.size();
}

void print_res(result res){
    cout << "The max: " << res.max << endl
        << "The min: " << res.min << endl
        << "The mean: " << res.mean << endl;
}

int main(){

    vector<double> test1 {1,2,3,4,5,6,7,8,9};
    double min, max, mean;
    print_res(vec_test(test1));
    vec_ref(test1, max, min, mean);
    cout << "Reference Result: " << endl;
    cout << "The max: " << max << endl
        << "The min: " << min << endl
        << "The mean: " << mean << endl;

    return 0;
}
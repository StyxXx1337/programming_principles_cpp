#include "../../../!_Misc/std_lib_facilities.h"

// @brief index is the sum of the products at the same position of two vectors.
double calculate_index( const vector<double>& weights, 
                        const vector<double>& amounts
                        )
{
    if (weights.size() != amounts.size()) 
        error("The size of the inputs are differnt.");
    
    double index = .0;

    for (size_t i = 0; i < weights.size(); ++i){
        index += (weights[i] * amounts[i]); // increase the index by weights * amounts
    }

    return index;

}


int main(){
    vector<double> weights {1,2,3,4,5,6,7,8,9,0};
    vector<double> amounts {10,20,30,40,50,60,70,80,90,100};

    cout << "The index is: " << calculate_index(weights, amounts) << ".\n";

}
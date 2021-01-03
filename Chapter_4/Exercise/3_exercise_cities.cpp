#include "../../!_Misc/std_lib_facilities.h"

double total_distance(vector<double> input_vector){
    double sum = 0;
    
    for (int counter = 0; counter < input_vector.size(); ++counter){
        sum += input_vector[counter];
    }

    return sum;
}

double median(vector<double> input_vector){
    sort(input_vector);

    if (input_vector.size() % 2 == 1){
        //cout << "Uneven\n";
        return input_vector[input_vector.size()/2];
    }
    else{
        //cout << "Even\n";
        double middle_value = 0.0;
        middle_value = (input_vector[input_vector.size()/2] + input_vector[(input_vector.size()/2)-1]) / 2.0;
        return middle_value;
    }

}

int main(){

    vector<double>city_distances;
    double distance;

    cout << "Please input the distance between the cities: ";

    while(cin>>distance){
        city_distances.push_back(distance);
    }

    sort(city_distances);

    cout << "The total distances is:\t" << total_distance(city_distances) << '\n';
    cout << "The median is:\t\t" << median(city_distances) << '\n';
    cout << "Largest distance is:\t" << city_distances[city_distances.size()-1] <<'\n';
    cout << "Smallest distance is:\t" << city_distances[0] <<'\n';

    return 0;
}
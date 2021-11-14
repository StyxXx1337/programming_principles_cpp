// This program reads in doubles as long as there are valid inputs.
// The doubles represent distances between cities.
// The program will print out the sum, the minimum, the maximum and the average.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    vector<double> distances;
    double distance = .0;
    double min = LC_MAX;
    double max = LC_MIN;
    double sum = 0;
    cout << "Please input the distances:\n";
    while(cin >> distance){
        if (distance > max) max = distance;
        if (distance < min) min = distance;
        distances.push_back(distance);
        sum += distance;
    }

    double average = (sum / distances.size());

    cout << "\nYou have inputted " << distances.size() << " distances."
        << "\nThe minimum distance is: " << min
        << "\nThe maximum distance is: " << max
        << "\nThe distance sum is: " << sum
        << "\nThe average distance is: " << average << endl;

    return 0;
}
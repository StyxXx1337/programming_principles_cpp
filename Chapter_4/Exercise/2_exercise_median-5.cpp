#include "../../!_Misc/std_lib_facilities.h"

double find_median(vector<double> temps){
    sort(temps);
    
    if (temps.size() % 2 == 1){
        cout << "Uneven\n";
        return temps[temps.size()/2];
    }
    else{
        cout << "Even";
        double middle_value = 0.0;
        middle_value = (temps[temps.size()/2] + temps[(temps.size()/2)-1]) / 2.0;
        // cout << "Size: " << temps.size()
        //    << "\nValue 1: " << temps[temps.size()/2]
        //    << "\nValue 2: " << temps[(temps.size()/2)-1];
        return middle_value;
    }
}

int main(){
    vector<double> temps;
    for (double temp; cin>>temp;){
        temps.push_back(temp);
    }

    double sum = 0;
    for (double x: temps){
        sum += x;
    }

    cout << "Average temperature: " << sum/temps.size() << '\n';

    cout << "Median temperature: " << find_median(temps) << '\n';

    return 0;
}
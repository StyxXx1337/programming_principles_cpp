// This is a tempreture logging program from page 154 of the book.
// It should be repaired and produce no compile, link or logical errors.

#include "../../../!_Misc/std_lib_facilities.h"

int main(){

    vector<double> temps;

    for (double temp; cin >> temp; )
        temps.push_back(temp);

    if (temps.size() == 0) {
        cerr << "No temperatures inputted. Closing program...";

        return -1;
    }

    double sum = 0;
    double high_temp = -280; // -273C is the lowest possible temprerature
    double low_temp = 6000;   // the sun temperature is roughtly 5500C

    for (double x : temps){

        if (x > high_temp) high_temp = x;
        if (x < low_temp) low_temp = x;
        sum += x;
    }

    cout << "High Temperature: " << high_temp << '\n';
    cout << "Low Temperature: " << low_temp << '\n';
    cout << "Average Temperature: " << sum / temps.size() << '\n';

    return 0;
}
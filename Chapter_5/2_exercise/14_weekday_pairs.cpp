// collect a value pair (weekday, value) in a vector
// print out the sum of all the values per weekday
// ignore wrong inputs like funday, but accept common alternatives like: mon, Monday, monday

#include "../../!_Misc/std_lib_facilities.h"

int sum_vector(vector<int> vec){
    int sum = 0;
    for (int i = 0; i < vec.size(); i++){
        sum += vec[i];
    }

    return sum;
}

int main(){
    
    
    vector <int> mon;
    vector <int> tue;
    vector <int> wed;
    vector <int> thu;
    vector <int> fri;
    vector <int> sat;
    vector <int> sun;
    int rejected = 0;
    
    cout << "Input your string below: \n";
    while(cin){
        string day {};
        int value {0};
        
        cin >> day;
        cin >> value;

        if (day == "Monday" || day == "Mon" || day == "monday" || day == "mon"){
        mon.push_back(value);
        }
        else if(day == "Tuesday" || day == "Tue" || day == "tuesday" || day == "tue"){
            tue.push_back(value);
        }
        else if(day == "Wednesday" || day == "Wed" || day == "wednesday" || day == "wed"){
            wed.push_back(value);
        }
        else if(day == "Thursday" || day == "Thu" || day == "thursday" || day == "thu"){
            thu.push_back(value);
        }
        else if(day == "Friday" || day == "Fri" || day == "friday" || day == "fri"){
            fri.push_back(value);
        }
        else if(day == "Saturday" || day == "Sat" || day == "saturday" || day == "sat"){
            sat.push_back(value);
        }
        else if(day == "Sunday" || day == "sun" || day == "sunday" || day == "sun"){
            sun.push_back(value);
        }
        else{

            ++rejected;
        }

        
    }

    //max day to all lower... 

    

    cout << "Monday: " << sum_vector(mon) << '\n'
        << "Tuesday: " << sum_vector(tue) << '\n'
        << "Wednesday: " << sum_vector(wed) << '\n'
        << "Thursday: " << sum_vector(thu) << '\n'
        << "Friday: " << sum_vector(fri) << '\n'
        << "Saturday: " << sum_vector(sat) << '\n'
        << "Sunday: " << sum_vector(sun) << '\n'
        << "Rejected: " << rejected;


    return 0;
}
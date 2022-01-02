// This program takes a weekday and a number and saves the number for the weekday

#include "../../../!_Misc/std_lib_facilities.h"

int weekday_to_number(string name){

    switch (name) {
        case "Monday":
        case "Mon":
        case "mon":
        case "Mo":
        case "MO":
            return 0;
            break;

        case "Tuesday":
        case "Tue":
        case "tue":
        case "Tu":
        case "TU":
            return 1;
            break;

        case "Wednesday":
        case "Wed":
        case "wed":
        case "We":
        case "WE":
            return 2;
            break;

        case "Thursday":
        case "Thur":
        case "thu":
        case "Th":
        case "TH":
            return 3;
            break;

        case "Friday":
        case "Fri":
        case "fri":
        case "Fr":
        case "FR":
            return 4;
            break;

        case "Saturday":
        case "Sat":
        case "sat":
        case "Sa":
        case "SA":
            return 5;
            break;
        
        case "Sunday":
        case "Sun":
        case "sun":
        case "Su":
        case "SU":
            return 6;
            break;
    }
}

int main(){

    cout << "Please insert the weekday and number: " << endl;
    int number = 0;
    string weekday;

    cin >> weekday >> number;

    cout << "Weekday: " << weekday_to_number(weekday) << endl
        << "Number: " << number << endl;

}
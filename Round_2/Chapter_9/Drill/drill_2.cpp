#include "../../../!_Misc/std_lib_facilities.h"

struct Date {
    int year, month, day;
    Date(int yy, int mm, int dd){
        if (yy < 1000 || yy > 3000){
        error("Year is out of the range of 1000-3000");
        }
        if (mm<1 || mm>12){
            error("Month is not between 1 and 12.");
        }
        if (dd<1 || dd >31){
            error("Day is out of range 1-31.");
        }
        year = yy;
        month = mm;
        day = dd;
    }
    
    void add_day(int i);
};

ostream& operator<<(ostream& os, const Date& dd){
        return os << dd.year << "." << dd.month << "." << dd.day;
    }

void Date::add_day(int i){
    if (day + i > 31){
        day = (day+i)%31;
        month += i / 31;
    }
    else{
        day += i;
    }
}

int main(){

    Date today {1978, 6, 25};
    cout << today << endl;

    Date tomorrow = today;
    tomorrow.add_day(1);
    cout << tomorrow << endl; // Plus today plus one day (1978.6.26)
    tomorrow.add_day(62);
    cout << tomorrow << endl; // Tomorrow + 2 months. (1978.8.26)
    Date error_date {1978, 6, -2};

    return 0;
}
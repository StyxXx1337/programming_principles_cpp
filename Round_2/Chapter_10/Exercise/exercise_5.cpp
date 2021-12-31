#include "../std_lib_facilities.h"

//------------------------------------------------------------------------------

const int not_a_reading = -7777;    // less than absolute zero
const int not_a_month = -1;

//------------------------------------------------------------------------------

struct Day {
    vector<double> hour;
    Day();    // initialize hours to "not a reading"
};

//------------------------------------------------------------------------------

Day::Day() : hour(24)
{
    for (int i = 0; i<hour.size(); ++i) hour[i]=not_a_reading;
}

//------------------------------------------------------------------------------

struct Month {        // a month of temperature readings
    int month;        // [0:11] January is 0
    vector<Day> day;  // [1:31] one vector of readings per day
    Month()           // at most 31 days in a month (day[0] wasted)
        :month(not_a_month), day(32) { }
};

//------------------------------------------------------------------------------

struct Year {             // a year of temperature readings, organized by month
    int year;             // positive == A.D.
    vector<Month> month;  // [0:11] January is 0
    Year() :month(12) { } // 12 months in a year
};

//------------------------------ Chapter 10 Exercise 5 -------------------------

void print_year(ostream& ost, const Year& y)
{
    ost << y.year << ' ';
}
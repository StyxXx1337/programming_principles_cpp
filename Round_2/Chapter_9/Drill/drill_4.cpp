#include "../../../!_Misc/std_lib_facilities.h"

enum class Month{
    jan=1, feb, apr, may, jun, jul, aug, sep, oct, nov, dec
};

class Date{
public:
    // Initializer
    Date(int y, Month m, int d);
    Date(int y, int m, int d);
    Date();
    
    // Return of values
    int year(void) const { return yy; } // Part of Drill 5
    Month month(void) const { return mm; } // Part of Drill 5
    int day(void) const { return dd; } // Part of Drill 5
    Date& operator++();

    void add_days(int i);

private:
    int yy;
    Month mm;
    int dd;
};

Date::Date(int y, Month m, int d)
    :yy{y}, mm{m}, dd{d}
{
    if (y > 3000 || 1000 > y){
        error("Year is out of range 1000-3000.");
    }
    if (0 > d || d > 31){
        error("Day is not between 1-31");
    }
}

Date::Date(int y, int m, int d)
{
    if (m > 12 || 1 > m){
        error("Month out of range.");
    }
    Date(y, Month(m), d);
}

Date::Date(){
    yy = 1900;
    mm = Month::jan;
    dd = 1;
}

ostream& operator<<(ostream& os, const Date dd){
    return os << dd.year() << '.' << int(dd.month()) << '.' << dd.day();
}

Date& Date::operator++(){
    if (dd == 31){
        dd = 1;
        if (mm == Month::dec){
            mm = Month::jan;
            ++yy;
        }
        else{
            mm = Month(int(mm)+ 1);
        }
    }
    else{
        ++dd;
    }
    return *this;
}

void Date::add_days(int i){
    if (dd+i > 31){
        dd = (dd+i) % 31;
        mm = Month(int(mm)+((dd+i) / 31));
    }
    else{
        dd += i;
    }
}

int main(){
    Date today {1978, 6, 25};
    Date may {1978, Month::may, 25};
    Date no_init;
    cout << today << endl;
    cout << may << endl;
    cout << no_init << endl;
    ++no_init;
    cout << no_init << endl;
    //Date wrong_month {1978, 13, 25};
    //Date wrong_year {-1, 11, 25};
    //Date wrong_da {1800, 11, 35};
    return 0;
}
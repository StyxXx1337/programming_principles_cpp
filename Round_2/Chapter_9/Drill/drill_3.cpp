#include "../../../!_Misc/std_lib_facilities.h"

class Date{
    int yy, mm, dd;

public:
    Date(int y, int m, int d);
    void add_days(int i);
    int month(void) const { return mm; }
    int day(void) const { return dd; }
    int year(void) const { return yy; }
};

ostream& operator<<(ostream& os, const Date& dd){
    return os << dd.year() << '.' << dd.month() << '.' << dd.day();
}

Date::Date(int y, int m, int d)
    :yy{y}, mm{m}, dd{d}{

}

void Date::add_days(int i){
    if ((dd+i < 1) || (dd + i) > 31){
        dd = (dd + i) % 31;
        mm += (dd+i) / 31;
    }
    else{
        dd += i;
    }
}

int main(){

    Date today {1978,6,25};
    Date tomorrow = today;
    tomorrow.add_days(1);

    cout << today << endl;
    cout << tomorrow << endl;



    return 0;
}
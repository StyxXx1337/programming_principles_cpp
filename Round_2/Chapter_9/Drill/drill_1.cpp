#include "../../../!_Misc/std_lib_facilities.h"

struct Date{
    int y; //year
    int m; //month
    int d; //day
};

void init_date(Date& dd, int y, int m, int d){
    if (y < 1000 || y > 3000){
        error("Year is out of the range of 1000-3000");
    }
    if (m<1 || m>12){
        error("Month is not between 1 and 12.");
    }
    if (d<1 || d >31){
        error("Day is out of range 1-31.");
    }
    dd.y = y;
    dd.m = m;
    dd.d = d;
}

void add_days(Date& dd, int a){
    if ((dd.d + a) >31){
        dd.d = ((dd.d + a)-31);
    }
    else{
        dd.d = dd.d+a;
    }
}

void print_date(const Date& dd){
    cout << dd.y << '.' << dd.m << '.' << dd.d << endl;
}

int main(){
    // initialize to June 25th 1978
    Date today;
    init_date(today, 1978, 6, 25);

    Date tomorrow = today;
    add_days(tomorrow, 1);

    print_date(today);
    print_date(tomorrow);
}
#include "../../../!_Misc/std_lib_facilities.h"
#include "exercise_11.hpp"

namespace Chrono {

  Date::Date(int yy, Month mm, int dd)
    : y{yy}, m{mm}, d{dd}
    {
      if(!is_date(yy,mm,dd)) throw Invalid();
    }

  const Date& default_date()
  {
    static Date dd{2001, Month::jan, 1};
    return dd;
  }

  Date::Date()
    : y{default_date().year()}, 
      m{default_date().month()}, 
      d{default_date().day()} 
  {
  }

  void Date::add_day(int n)
  {
    if((d+n) < days_in_month[int(m) - 1]){
      d += n;
    }
    else{
      error("Month jump not implemented yet.");
    }
  }
  
  void Date::add_month(int n)
  {
    if ((int(m)+n) > 12){
      m = Month(((int(m) + n) % 12));
      add_year(int((int(m) + n) / 12));
    }
    else{
      m = Month(int(m) + n);
    }
  }

  void Date::add_year(int n)
  {
    if (m == Month::feb && d == 29 && !leapyear(y+n)){
      m = Month::mar;
      d = 1;
    }
    y += n;
  }

  // Helper functions

  bool is_date(int y, Month m, int d)
  {
    if (d<=0) return false;
    if(m<Month::jan || Month::dec<m) return false;

    int days_in_month = 31;

    switch(m){
      case Month::feb:
        days_in_month = (leapyear(y))?29:28;
        break;
      case Month::apr: case Month::jun: case Month::sep: case Month::nov:
        days_in_month = 30;
        break;
    }

    if (days_in_month < d) return false;

    return true;
  }

  bool leapyear(int year){
  if (year%4 == 0){
    if ((year % 100 == 0) && (year % 400 != 0) ) return false;
    return true;
  }
  
  return false;
  }

  bool operator==(const Date& a, const Date& b){

    return a.year() == b.year() 
        && a.month() == b.month() 
        && a.day() == b.day();
  }

  bool operator!=(const Date& a, const Date& b){
    return !(a==b);
  }

  ostream& operator<<(ostream& os, const Date& d){
    return os << '(' << d.year()
              << ',' << int(d.month())
              << ',' << d.day() << ')';
  }

  istream& operator>>(istream& is, Date& dd){
    int y, m, d;
    char ch1, ch2, ch3, ch4;
    is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
    if (!is) return is;
    if (ch1 != '(' || ch2 != ',' || ch3 != ',' || ch4 != ')'){
      is.clear(ios_base::failbit);
    return is;
    }

    dd = Date(y, Month(m), d);

    return is;
  }

  Day day_of_week(const Date& d)
  {
    //
    return Day::wednesday;
  }

  Date next_Sunday(const Date& d)
  { 
    int gap_to_sunday = (7 - int(day_of_week(d)));
    Date nSunday;
    nSunday = d;
    nSunday.add_day(gap_to_sunday);
    cout << "In Function: " << nSunday << endl
          << "gap_to_sunday: " << gap_to_sunday << endl;
    return nSunday;
  }

  Date next_workday(const Date& d)
  {
    Date next_wd {d};
    if (day_of_week(d) == Day::friday){
      next_wd.add_day(3);
      return (next_wd);
    }
    else if (day_of_week(d) == Day::saturday){
      next_wd.add_day(2);
      return (next_wd);
    }
    next_wd.add_day(1);
    return next_wd;
  }

  int day_in_year(const Date& d){
    int amount = 0;

    amount += d.day();
    if (d.month() == Month::jan) return amount;
    
    for (int i = (int(d.month()) - 2); i >= 0; --i){
      amount += days_in_month[i];
    }

    if (leapyear(d.year()) && (int(d.month()) > 2)){
      ++amount;
    }
    return amount;
  }

  int week_of_year(const Date& d)
  {
    
    return (int((day_in_year(d) + 
                int(day_of_week(Date{d.year(),Month::jan, 1}))) 
                / 7) + 1);
  }
} // Chrono


int main(){

  
  // Chrono::Date d {1999, Chrono::Month::may, 30};
  // Chrono::Date d2 {1999, Chrono::Month::jan, 2};
  // Chrono::Date d_30 {1999, Chrono::Month::jan, 30};
  // Chrono::Date sil {1999, Chrono::Month::dec, 31};
  // cout << d << " is the " << day_in_year(d) << " day in the year and the " 
  //                         << week_of_year(d) << " week of the year." << endl
  //     << d2 << " is the " << day_in_year(d2) << " day in the year and the " 
  //                         << week_of_year(d2) << " week of the year." << endl
  //     << d_30 << " is the " << day_in_year(d_30) << " day in the year and the " 
  //                         << week_of_year(d_30) << " week of the year." << endl
  //     << sil << " is the " << day_in_year(sil) << " day in the year and the " 
  //                         << week_of_year(sil) << " week of the year." << endl;

  Chrono::Date d {1999, Chrono::Month::may, 10};
  Chrono::Date nSunday;
  nSunday = Chrono::next_Sunday(d);

  cout << d << endl;
  cout << nSunday << endl;

  return 0;
}
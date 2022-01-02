namespace Chrono{

  enum class Month {
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
  };

  enum class Day {
    sunday = 0, monday, tuesday, wednesday, thursday, friday, saturday
  };

  const vector<int> days_in_month {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  class Date {
  public:
    class Invalid {};

    Date(int y, Month m, int d);
    Date(int d);
    Date();

    int day() const { return d; };
    Month month() const { return m;};
    int year() const { return y; };

    void add_day(int n);
    void add_month(int n);
    void add_year(int n);

  private:
    long int _d;
  };

  bool is_date(int y, Month m, int d);
  bool leapyear(int y);

  bool operator==(const Date& a, const Date& b);
  bool operator!=(const Date& a, const Date& b);

  ostream& operator<<(ostream& os, const Date& d);
  istream& operator>>(istream& is, Date& dd);

  Day day_of_week(const Date& d);
  Date next_Sunday(const Date& d);
  Date next_weekday(const Date& d);
}
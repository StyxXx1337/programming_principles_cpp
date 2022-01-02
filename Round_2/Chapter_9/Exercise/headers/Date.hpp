#ifndef _DATE_H_
#define _DATE_H_

// ----------------------- Date Class ------------------------------------
// simple date struct without much checking
struct Date{
  Date(): year{0}, month{1}, day{1}{};
  Date(int y, int m, int d);

private:
  int year;
  int month;
  int day;
};

#endif // _DATE_H_

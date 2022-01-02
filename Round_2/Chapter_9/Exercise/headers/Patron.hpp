#ifndef _PATRON_H_
#define _PATRON_H_

#include <iostream>

class Patron{
public:
  Patron();
  Patron(string name, int card_number, double fees);
  bool open_fees();
  string name() const { return n; };
  int card_number() const { return c_n; };
  double fees() const { return f; };

private:
  string n;
  int c_n;
  double f;
};

#endif

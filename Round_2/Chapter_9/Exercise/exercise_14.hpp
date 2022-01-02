#ifndef _MONEY_H_
#define _MONEY_H_

#include <ostream>
#include <iostream>
#include <string>

class Money{
public:
  Money(int cents);
  Money(int dollars, int cents);

  int get_factor(void) const { return _factor; };
  std::string get_currency(void) const { return _currency; };
  long int get_cents(void) const { return _cents; };

  friend Money operator+(const Money& lhs, const Money& rhs);
  friend Money operator-(const Money& lhs, const Money& rhs);
  friend Money operator*(const Money& lhs, int i);
  friend Money operator/(const Money& lhs, int i);

private:
  long int _cents;
  std::string _currency = "USD";
  int _factor = 100;
};

#endif // _MONEY_H_
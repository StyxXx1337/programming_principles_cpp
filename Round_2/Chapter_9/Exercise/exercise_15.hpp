#ifndef _MONEY_H_
#define _MONEY_H_

#include <ostream>
#include <istream>
#include <iostream>
#include <string>
#include <vector>

class Money{
public:
  Money(double cents, std::string currency);
  Money(int dollars, double cents, std::string currency);

  int get_factor(void) const { return _factor; };
  std::string get_currency(void) const { return _currency; };
  double get_curr_factor(std::string curr) const;
  long int get_cents(void) const { return _cents; };
  void set_cents(int c) { _cents = c; };
  void set_currency(std::string curr) { _currency = curr; };
  bool valid_currency(std::string curr);

  friend Money operator+(const Money& lhs, const Money& rhs);
  friend Money operator-(const Money& lhs, const Money& rhs);
  friend Money operator*(const Money& lhs, int i);
  friend Money operator/(const Money& lhs, int i);
  friend std::istream& operator>>(std::istream& is, Money& m);

private:
  std::vector<std::string> supported_currencies {"USD", "DKK", "JPY"};
  std::vector<double> currency_factors {1.0, 5.0, 110.0};
  long int _cents;
  std::string _currency = "USD";
  int _factor = 100;
};

#endif // _MONEY_H_
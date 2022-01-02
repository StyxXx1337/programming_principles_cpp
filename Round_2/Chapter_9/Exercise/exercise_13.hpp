#ifndef _RATIONAL_H_
#define _RATIONAL_H_

#include <iostream>
#include "../../../!_Misc/std_lib_facilities.h"

namespace Numbers {

class Rational{

public:
class Invalid{};
Rational(int num, int det);
Rational();

int numerator(void) const { return _numerator; };
int determinator(void) const { return _determinator; };
void set_numerator(int i) { _numerator = i; };
void set_determinator(int i);
double to_double(void) const;
void optimize(void);

// Stream Operators - Somehow it does't work....
// friend std::ostream& operator<<(std::ostream& os, const Numbers::Rational& rhs);
// friend std::istream& operator>>(std::istream& is, Numbers::Rational& rhs);

// Return Value Operators
Rational operator+(const Rational& rhs);
Rational operator-(const Rational& rhs);
Rational operator/(const Rational& rhs);
Rational operator*(const Rational& rhs);

// Inplace Operators
Rational& operator++();
Rational& operator--();

/** Not implemented 
* Rational& operator+=(const Rational& rhs); // Can also be thought with int
* Rational& operator-=(const Rational& rhs); // Can also be thought with int
* Rational& operator*=(const Rational& rhs); // Can also be thought with int
* Rational& operator/=(const Rational& rhs); // Can also be thought with int
**/

private:
  int _numerator;
  int _determinator;

}; // Rational class

} // Rational namespace

#endif //_RATIONAL_H_
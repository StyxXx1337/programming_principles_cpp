#include "exercise_14.hpp"


Money::Money(int cents)
  : _cents{cents}
  {
  }

Money::Money(int dollars, int cents){
  _cents = dollars * get_factor() + cents;
}

std::ostream& operator<<(std::ostream& os, const Money& m){
  return os << int(m.get_cents()/m.get_factor()) 
            << '.' << abs((m.get_cents() % m.get_factor())) << " " 
            << m.get_currency();
}

Money operator+(const Money& lhs, const Money& rhs){
  Money res {0};
  res._cents = lhs._cents + rhs._cents;

  return res;
}

Money operator-(const Money& lhs, const Money& rhs){
  Money res {0};
  res._cents = lhs._cents - rhs._cents;

  return res;
}

Money operator*(const Money& lhs, int i){
  Money res {0};
  res._cents = lhs._cents * i;

  return res;
}

Money operator/(const Money& lhs, int i){
  Money res {0};
  res._cents = lhs._cents / i;

  return res;
}

int main(){

  Money m1 {150};
  Money m2 {900, 00};
  
  std::cout << m1 << std::endl;
  std::cout << m2 << std::endl;
  std::cout << m1 << " + " << m2 << " = " << m1+m2 << std::endl;
  std::cout << m1 << " - " << m2 << " = " << m1-m2 << std::endl; // Only one minus...
  std::cout << m1 << " * " << 3 << " = " << m1 * 3 << std::endl;
  std::cout << m2 << " / " << 3 << " = " << m2 / 3 << std::endl;

  //std::cout << m1 << " * " << 3 << " = " << m2 / m1 << std::endl; // Won't compile.

  return 0;
} 
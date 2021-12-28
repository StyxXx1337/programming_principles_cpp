#include "exercise_15.hpp"

Money::Money(double cents, std::string currency)
{
  _cents = int(cents + 0.5);
  if (valid_currency(currency) == true)
  {
    _currency = currency;
  }
  else
  {
    std::cout << "Invalid currency..." << std::endl;
  }
}

Money::Money(int dollars, double cents, std::string currency)
{
  _cents = dollars * get_factor() + int(cents + 0.5);
  if (valid_currency(currency) == true)
  {
    _currency = currency;
  }
  else
  {
    std::cout << "Invalid currency..." << std::endl;
  }
}

std::ostream &operator<<(std::ostream &os, const Money &m)
{
  return os << int(m.get_cents() / m.get_factor())
            << '.' << abs((m.get_cents() % m.get_factor())) << " "
            << m.get_currency();
}

Money operator+(const Money &lhs, const Money &rhs)
{
  std::string r_curr = rhs.get_currency(); 
  std::string l_curr = lhs.get_currency();
  
  Money res{0, l_curr};
  res._cents = lhs._cents + 
              (
                (rhs._cents) / 
                rhs.get_curr_factor(r_curr) * 
                lhs.get_curr_factor(l_curr)
              );

  return res;
}

Money operator-(const Money &lhs, const Money &rhs)
{
  std::string r_curr = rhs.get_currency(); 
  std::string l_curr = lhs.get_currency();

  Money res{0, l_curr};
  res._cents = lhs._cents - 
              (
                (rhs._cents) / 
                rhs.get_curr_factor(r_curr) * 
                lhs.get_curr_factor(l_curr)
              );

  return res;
}

Money operator*(const Money &lhs, int i)
{
  Money res{0, lhs.get_currency()};
  res._cents = lhs._cents * i;

  return res;
}

Money operator/(const Money &lhs, int i)
{
  Money res{0, lhs.get_currency()};
  res._cents = lhs._cents / i;

  return res;

}

double Money::get_curr_factor(std::string curr) const
{

  for (int i; i < supported_currencies.size(); i++){
    if (supported_currencies[i] == curr){
      return currency_factors[i];
    }
  }
  return -1;
}

bool Money::valid_currency(std::string curr){
  for (std::string c : supported_currencies){
    if (c == curr){
      return true;
    }
  }
  return false;
}

int main()
{

  Money m1{150.5, "USD"};
  Money m2{900, 20.4, "DKK"};
  Money jpy{11000, "JPY"};
  Money usd{100, "USD"};
  Money dkk{500, "DKK"};

  std::cout << m1 << std::endl;
  std::cout << m2 << std::endl;
  std::cout << m1 << " + " << m2 << " = " << m1 + m2 << std::endl;
  std::cout << m1 << " - " << m2 << " = " << m1 - m2 << std::endl; // Only one minus...
  std::cout << m1 << " * " << 3 << " = " << m1 * 3 << std::endl;
  std::cout << m2 << " / " << 3 << " = " << m2 / 3 << std::endl;
  std::cout << jpy << " + " << usd << " = " << jpy + usd << std::endl;
  std::cout << dkk << " - " << usd << " = " << dkk - usd << std::endl;
  std::cout << usd << " + " << dkk << " = " << usd + dkk << std::endl;
  Money jpy_input{0, "USD"}; 

  return 0;
}
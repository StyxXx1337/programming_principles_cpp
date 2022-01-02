#include "exercise_13.hpp"

// Constructor Definitions
Numbers::Rational::Rational()
  : _numerator{0}, _determinator{1}
  {
  }

Numbers::Rational::Rational(int num, int det)
  : _numerator{num}, _determinator{det}
  {
  }

void Numbers::Rational::set_determinator(int i){
  if (i == 0){
    throw Invalid();
  }
  else{
    _determinator = i;
  }
}

double Numbers::Rational::to_double(void) const{
  return ((double)this->_numerator / this->_determinator);
}

void Numbers::Rational::optimize(void){

  // Checks if either Determinator or Numerator are a multiple of the other.
  if ((_determinator % _numerator) == 0){
    _determinator = _determinator / _numerator;
    _numerator = 1;
    return;
  }
  else if ((_numerator % _determinator) == 0){
    _numerator = _numerator / _determinator;
    _determinator = 1;
    return;
  }

  // Runs through the 
  int upper_bound = int(((_determinator > _numerator) ? _numerator : _determinator)/2);

  while (upper_bound > 2){
  
    if (((_numerator % upper_bound) == 0) && ((_determinator % upper_bound) == 0)){
      _numerator /= upper_bound;
      _determinator /= upper_bound;
    }
    
    --upper_bound;
  }
}

// Return by Value Operators
Numbers::Rational Numbers::Rational::operator+(const Numbers::Rational& rhs){
  int temp_num = (this->numerator()*rhs.determinator()) + 
                  (this->determinator()*rhs.numerator());
  int temp_det = (this->determinator() * rhs.determinator());

  // to be optimized
  Numbers::Rational result {temp_num, temp_det};
  result.optimize();

  return result;
}

Numbers::Rational Numbers::Rational::operator-(const Numbers::Rational& rhs){
  int temp_num = (this->numerator()*rhs.determinator()) - 
                  (this->determinator()*rhs.numerator());
  int temp_det = (this->determinator() * rhs.determinator());

  // to be optimized
  Numbers::Rational result {temp_num, temp_det};
  result.optimize();
  
  return result;
}

Numbers::Rational Numbers::Rational::operator*(const Numbers::Rational& rhs){
  int temp_num = (this->numerator() * rhs.numerator());
  int temp_det = (this->determinator() * rhs.determinator());

  // to be optimized
  Numbers::Rational result {temp_num, temp_det};
  result.optimize();

  return result;
}

Numbers::Rational Numbers::Rational::operator/(const Numbers::Rational& rhs){
  int temp_num = (this->numerator() * rhs.determinator());
  int temp_det = (this->determinator() * rhs.numerator());

  // to be optimized
  Numbers::Rational result {temp_num, temp_det};
  result.optimize();

  return result;
}

// Inplace Operators
// Addition of 1.0
Numbers::Rational& Numbers::Rational::operator++(){
  this->_numerator = this->_numerator + this->_determinator;
  return *this;
}

// Deduction of 1.0
Numbers::Rational& Numbers::Rational::operator--(){
  this->_numerator = this->_numerator - this->_determinator;
  return *this;
}

// Stream Operators
std::ostream& operator<<(std::ostream& os, const Numbers::Rational& rhs){
  return os << "( " << rhs.numerator() << " / " << rhs.determinator() << " )";
}

std::istream& operator>>(std::istream& is, Numbers::Rational& rhs){
  char c1, c2, c3;
  int i1, i2;

  is >> c1 >> i1 >> c2 >> i2 >> c3;
  rhs.set_numerator(i1);
  rhs.set_determinator(i2);
  return is;
}

bool operator==(const Numbers::Rational& lhs, const Numbers::Rational& rhs){
  if (
      (lhs.numerator() == rhs.numerator()) && 
      (lhs.determinator() == rhs.determinator())
      )
      { return true; }
  else if (
          (lhs.numerator() / double(lhs.determinator())) 
          == 
          (rhs.numerator() / double(rhs.determinator()))
          )
          { return true; }
  return false;
}

bool operator<(const Numbers::Rational& lhs, const Numbers::Rational& rhs){
  if ((lhs.numerator() / double(lhs.determinator())) 
      < 
      (rhs.numerator() / double(rhs.determinator()))
      )
      {
        return true;
      }
    return false;
}

int main(){
  std::cout << "Testing the Rational Class: " << std::endl
        << "---------------------------------------------------" << std::endl;
  // Constructor Tests
  Numbers::Rational r1;
  std::cout << "Rational Class Initializer() worked" << std::endl;
  Numbers::Rational r2 {1, 2};
  std::cout << "Rational Class Initializer(int, int) worked" << std::endl;
  { // iostream Operator Test
  std::cout << "Test the operator<< : " << r2 << std::endl;
  std::cout << "Operator<< for Rational worked" << std::endl;
  std::cin >> r1;
  std::cout << "You entered : " << r1 << std::endl;
  std::cout << "Operator>> for Rational worked" << std::endl;
  }
  { // Comparision Operator Tests
  std::cout << "Is " << r2 << " the same as " << r1 << ((r1 == r2) ? ": Yes." : ": No!") << std::endl;
  std::cout << "Is " << r2 << " the same as " << r2 << ((r2 == r2) ? ": Yes." : ": No!") << std::endl;
  std::cout << "Operator== did work properly!" << std::endl;
  std::cout << "Is " << r2 << " smaller than " << r1 << ((r2 < r1) ? ": Yes." : ": No!") << std::endl;
  std::cout << "Is " << r2 << " smaller than " << r2 << ((r2 < r2) ? ": Yes." : ": No!") << std::endl;
  std::cout << "Operator< did work properly!" << std::endl;
  }
  { // Return Value Operators Tests 
  std::cout << r1 << " + " << r2 << " = " << r1+r2 << ".\n";
  std::cout << "Operator+ did work properly!" << std::endl;
  std::cout << r1 << " - " << r2 << " = " << r1-r2 << ".\n";
  std::cout << "Operator- did work properly!" << std::endl;
  std::cout << r1 << " * " << r2 << " = " << r1*r2 << ".\n";
  std::cout << "Operator* did work properly!" << std::endl;
  std::cout << r1 << " / " << r2 << " = " << r1/r2 << ".\n";
  std::cout << "Operator/ did work properly!" << std::endl;
  }
  { // Inplace Opertor Tests
    cout << "r1 before increase: " << r1 << '\t';
    ++r1;
    cout << "r1 after increase: " << r1 << std::endl;
    cout << "r1 before decrease: " << r1 << '\t';
    --r1;
    cout << "r1 after decrease: " << r1 << std::endl;
  }
  Numbers::Rational r3 {99, 7};
  std::cout << r3 << " is as double " << r3.to_double() << std::endl;
  Numbers::Rational r4 {1024, 96};
  std::cout << r4 << " is optimized ";
  r4.optimize();
  std::cout << r4 << std::endl;
  std::cout << "---------------------------------------------------" << std::endl
        << "All tests finished. " << std::endl;
  return 0;
}

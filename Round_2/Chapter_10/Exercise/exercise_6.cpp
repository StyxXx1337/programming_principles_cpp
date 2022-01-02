#include "../../../!_Misc/std_lib_facilities.h"

class Roman_int
{
public:
  Roman_int(int i)
      : number{i}
  {
  }
  int as_int(){
    return number;
  }
  void set_int(int i){
    number = i;
  }

  //friend istream& operator>>(istream& is, Roman_int r);

private:
  int number;
  std::string str;
};

ostream& operator<<(ostream& os, Roman_int& r){
  // Calculate the string to output
  int temp {r.as_int()};
  std::string roman;
  
  while (temp > 0){
    if (temp - 1000 >= 0){
      roman += 'M';
      temp -= 1000;
    }
    else if (temp - 500 >= 0){
      roman += 'D';
      temp -= 500;
    }
    else if (temp - 400 >= 0){
      roman += "CD";
      temp -= 400;
    }
    else if (temp - 100 >= 0){
      roman += 'C';
      temp -= 100;
    }
    else if (temp - 50 >= 0){
      roman += 'L';
      temp -= 50;
    }
    else if (temp - 40 >= 0){
      roman += "XL";
      temp -= 40;
    }
    else if (temp - 10 >= 0){
      roman += 'X';
      temp -= 10;
    }
    else if (temp - 5 >= 0){
      roman += 'V';
      temp -= 5;
    }
    else if (temp - 4 >= 0){
      roman += "IV";
      temp -= 4;
    }
    else if (temp - 1 >= 0){
      roman += 'I';
      temp -= 1;
    }
  }
  
  return os << roman;
}

istream& operator>>(istream& is, Roman_int& r){
  int number {0};
  char c;

  while (is >> c){
    if (c == 'M'){
      number += 1000;
    }
    else if (c == 'D'){
      number += 500;
    }
    else if (c == 'C'){
      number += 100;
      is >> c;
      if (c == 'D'){
        number += 300;
      }
      else{
        is.putback(c);
      }
    }
    else if (c == 'L'){
      number += 50;
    }
    else if (c == 'X'){
      number += 10;
      is >> c;
      if (c == 'L'){
        number += 30;
      }
      else{
        is.putback(c);
      }
    }
    else if (c == 'V'){
      number += 5;
    }
    else if (c == 'I'){
      number += 1;
      is >> c;
      if (c == 'V'){
        number += 3;
      }
      else{
        is.putback(c);
      }
    }
    else{
      break;
    }
  }
  r.set_int(number);
  return is;
}

int main()
{
  Roman_int test{555};
  std::cout << "This is " << test << " (test) as int: " << test.as_int() << std::endl;
  Roman_int r {0};

  std::cin >> r;

  std::cout << "This is " << r << " (r) as int: " << r.as_int() << std::endl;

  return 0;
}
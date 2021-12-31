#include "../../../!_Misc/std_lib_facilities.h"

const std::string filename{"raw_temps.txt"};

struct Reading
{
  int hour;
  double temperature;
};

std::istream &operator>>(std::istream &is, Reading &r)
{
  char c1, c2;
  is >> c1 >> r.hour >> r.temperature >> c2;
  // std::cout<<"C1: '" << c1 << "' C2: '" << c2 << "'" << std::endl;

  if (!is.eof() && ((c1 != '(') || (c2 != ')')))
  {
    std::cout << "C1: " << int(c1) << "C2: " << int(c2) << std::endl;
    error("Unknown format.");
  }
  return is;
}

ostream &operator<<(ostream &os, Reading &r)
{
  return os << '(' << r.hour << ' ' << r.temperature << ")\n";
}

int main()
{
  vector<Reading> read_list;
  Reading temp;

  ifstream ifs{filename};

  while (ifs >> temp)
  {
    read_list.push_back(temp);
  }

  for (auto r : read_list)
  {
    std::cout << r;
  }

  return 0;
}
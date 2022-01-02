#include "../../../!_Misc/std_lib_facilities.h"

const std::string filename{"raw_temps_v2.txt"};

struct Reading
{
  int hour;
  double temperature;
  char unit;
};

double f_to_c(int f){
    return ((f - 32) / 1.8);
}

ostream &
operator<<(ostream &os, Reading &r)
{
  return os << '(' << r.hour << ' ' << r.temperature << ' ' << r.unit << ")\n";
}

std::istream &operator>>(std::istream &is, Reading &r)
{
  char c1, c2;
  is >> c1 >> r.hour >> r.temperature >> r.unit >> c2;

  if (!is.eof() && ((c1 != '(') || (c2 != ')')))
  {
    std::cout << "C1: " << int(c1) << "C2: " << int(c2) << std::endl;
    error("Unknown format.");
  }
  return is;
}

vector<Reading> &read_file(vector<Reading> &read_list, std::string fn)
{
  Reading temp;

  ifstream ifs{fn};

  while (ifs >> temp)
  {
    if (temp.unit == 'f'){
      temp.temperature = f_to_c(temp.temperature);
      temp.unit = 'c';
    }
    read_list.push_back(temp);
  }

  return read_list;
}

void write_file(std::string fn)
{
  vector<Reading> read_list;
  Reading temp;

  for (int i = 0; i < 24; i++)
  {
    temp.hour = i;
    temp.temperature = 19.9 + i;
    temp.unit = [i]() -> char
    { if (i % 2 == 0){return 'c';} return 'f'; }();
    read_list.push_back(temp);
  }

  ofstream ofs{fn};
  for (auto r : read_list)
  {
    ofs << r;
  }
}

int main()
{
  write_file(filename);

  vector<Reading> read_list;
  read_list = read_file(read_list, filename);

  for (auto r : read_list)
  {
    std::cout << r;
  }

  return 0;
}
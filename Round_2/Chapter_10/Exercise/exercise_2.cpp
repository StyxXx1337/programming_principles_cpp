#include "../../../!_Misc/std_lib_facilities.h"

const std::string filename{"raw_temps.txt"};

struct Reading
{
  int hour;
  double temperature;
};

ostream& operator<<(ostream& os, Reading& r){
  return os << '(' << r.hour << ' ' << r.temperature << ")\n";
}

int main()
{
  vector<Reading> read_list;
  Reading temp;

  for (int i = 0; i < 24; i++){
    temp.hour = i;
    temp.temperature = 19.9 + i;
    read_list.push_back(temp);
  }

  ofstream ofs {filename};
  for (auto r: read_list){
    ofs << r;
  }

  return 0;
}
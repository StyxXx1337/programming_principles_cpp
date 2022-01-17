#include "../../../!_Misc/std_lib_facilities.h"

const std::string filename = {"file12.txt"};


vector<std::string> parse_line(std::string line){
  stringstream ss {line};
  vector<std::string> dict;

  for (std::string st; ss >> st;){
    dict.push_back(st);
  }

  return dict;
}

int main(){

  ifstream ifs {filename};

  std::string line;
  while (!ifs.eof()){
    getline(ifs, line);

    vector<std::string> dict;
    dict = parse_line(line);

    for (int i = (dict.size() - 1); i >= 0; --i){
      std::cout << dict[i] << ' ';
    }
    cout << "\n\n";
  }

  return 0;
}
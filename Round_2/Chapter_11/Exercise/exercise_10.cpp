#include "../../../!_Misc/std_lib_facilities.h"

vector<std::string> split(std::string s){
  stringstream ss {s};
  vector<std::string> dict;
  std::string buffer;

  for (char c; ss.get(c);){
    if (c == '\n'){
      break;
    }
    else if (buffer.size() > 0 && c == ' '){
      dict.push_back(buffer);
      buffer = "";
    }
    else if (c != ' '){
      buffer += c;
    }
  }
  if (buffer.size() > 0) { dict.push_back(buffer); };

  return dict;
}


int main(){

  std::string line;

  getline(cin, line);

  vector<std::string> dict;
  dict = split(line);

  for (std::string item : dict){
    std::cout << item << std::endl;
  }

  return 0;
}
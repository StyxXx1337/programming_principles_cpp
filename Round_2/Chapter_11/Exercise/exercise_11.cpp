#include "../../../!_Misc/std_lib_facilities.h"

vector<std::string> split(std::string line, std::string whitespaces){
  stringstream ss {line};
  vector<std::string> dict;
  std::string buffer;

  for (char c; ss.get(c);){
    if (c == ' '){
      if (buffer.size() > 0){ dict.push_back(buffer); };
      buffer = "";
    }
    else{
      int found = whitespaces.find(c);
      // std::cout << to_string(find) << std::endl;
      if (found >= 0){
        if (buffer.size() > 0) { dict.push_back(buffer); };
        buffer = "";
      }
      else{
        buffer += c;
      }
    }
  }

  // Last element that is in buffer needs to be pushed.
  dict.push_back(buffer);

  return dict;
}


int main(){

  std::string line;

  getline(cin, line);

  vector<std::string> dict;
  dict = split(line, ".!,");

  for (std::string item : dict){
    std::cout << item << std::endl;
  }

  return 0;
}
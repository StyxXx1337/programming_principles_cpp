#include "../../../!_Misc/std_lib_facilities.h"

std::string reverse_string(std::string str){
  stringstream ss {str};
  std::string result;

  for (char c; ss.get(c);){
    result = c + result;
  }

  return result;
}

int main(){

  std::string line;
  getline(cin, line);

  cout << "Original: " << line << std::endl;
  line = reverse_string(line);
  cout << "Reversed: " << line << std::endl;

  return 0;
}
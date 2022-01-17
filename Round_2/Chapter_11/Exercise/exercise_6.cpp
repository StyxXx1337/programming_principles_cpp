#include "../../../!_Misc/std_lib_facilities.h"

std::string replace_chars(std::string str){

  std::string result;

  for (int i = 0; i < str.size(); ++i){

    // Check for Quotes first...
    if (str[i] == '.' || str[i] == ',' || str[i] == ';' || str[i] == '-' || str[i] == '\''){
      result += ' ';
    }
    else if (str[i] == '"'){
      result += str[i];
      int counter {i+1};
      // check for closing double quotes.
      while (str[counter] != '"' && counter < str.size()){
        result += str[counter];
        ++counter;
      }
      
      if (counter < str.size()){
        result += str[i];
      }
      i = counter;
    }
    else{
      result += str[i];
    }
  }

  return result;
}

int main(){
  std::string test;
  getline(cin, test);

  std::string result {replace_chars(test)};

  std::cout << result << std::endl;

}
#include "../../../!_Misc/std_lib_facilities.h"


void parse_numbers(std::string str){
  stringstream ss {str};
  std::string temp;
  int int_temp {0};

  while (ss >> temp){
    stringstream temp_ss {temp};
    
    if (temp[0] == '0' && temp[1] == 'x'){
      temp_ss >> hex >> int_temp;
      std::cout << temp << " in hex is equal to " << int_temp << " decimal.\n";
    }
    else if (temp[0] == '0' && temp[1] != 'x'){
      temp_ss >> oct >> int_temp;
      std::cout << temp << " in oct is equal to " << int_temp << " decimal.\n";
    }
    else {
      temp_ss >> dec >> int_temp;
      std::cout << temp << " is a decimal.\n";
    }
  }
}

int main(){
  std::string temp;
  getline(cin, temp);

  parse_numbers(temp);

}
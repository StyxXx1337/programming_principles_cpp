#include "../../../!_Misc/std_lib_facilities.h"

const std::string filename = "sum_of_numbers.txt";

bool is_numeric(std::string st){
  for (char c : st){
    if (isdigit(c) == false){
      return false;
    }
  }
  return true;
}

int count_numbers(std::string file){
  ifstream ifs {file};
  std::string temp;
  int result {0};
  int counter {0};

  if (!ifs){
    error("File could not be opened.");
  }

  while(!ifs.eof()){
    ifs >> temp;
    if (is_numeric(temp)){
      result += stoi(temp);
    }
  }

  return result;
}

int main(){
  std::string f {filename};
  std::cout << "The amount is: " << count_numbers(f) << std::endl;
  return 0;
}
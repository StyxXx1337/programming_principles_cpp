#include "../../../!_Misc/std_lib_facilities.h"

std::string base_file {"file2_base.txt"};

void line_of_word(std::string file, std::string word){

  std::ifstream ifs {file};
  std::string line;
  std::string temp;

  int counter {0};

  if (!ifs) { error("File not found"); };

  while(getline(ifs, line)){
    counter++;
    stringstream ss {line};
    while(ss >> temp){
      if (temp == word){
        std::cout << counter << ": " << line << std::endl;
        break;
      }
    }
  }


}

int main(){

  line_of_word(base_file, "hello");
  return 0;

}
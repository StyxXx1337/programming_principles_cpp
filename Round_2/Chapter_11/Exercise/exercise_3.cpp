#include "../../../!_Misc/std_lib_facilities.h"

const std::string in_file {"file3_original.txt"};
const std::string out_file {"file3_without_vowels.txt"};


void remove_vowels(std::string filename){
  ifstream ifs {filename};
  ofstream ofs {out_file};

  std::string temp_str;

  while(getline(ifs, temp_str)){
    std::string no_vowels;
    
    for (char c : temp_str){
      if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
        no_vowels += c;
      }
    }
    ofs << no_vowels << std::endl;
  }
}

int main(){
  
  remove_vowels(in_file);
  return 0;

}
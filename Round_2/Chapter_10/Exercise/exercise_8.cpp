#include "../../../!_Misc/std_lib_facilities.h"

const std::string f1 {"first_file.txt"};
const std::string f2 {"second_file.txt"};
const std::string output {"third_file.txt"};

void combine_two_files(std::string file1, std::string file2){
  ifstream ifs1 {file1};
  ifstream ifs2 {file2};
  ofstream ofs {output};

  if (!ifs1 || !ifs2 || !ofs){
    error("File not found.");
  }
  
  std::string temp;
  while(getline(ifs1, temp)){
    ofs << temp << std::endl;
  }
  while(getline(ifs2, temp)){
    ofs << temp << std::endl;
  }
}

int main(){

  std::string filename_1 {f1};
  std::string filename_2 {f2};

  combine_two_files(filename_1, filename_2);


  return 0;
}
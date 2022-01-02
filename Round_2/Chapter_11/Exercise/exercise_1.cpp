#include "../../../!_Misc/std_lib_facilities.h"

const std::string origin = "file1_in.txt";
const std::string result = "file1_out.txt";

void copy_file_all_lower(std::string filename){
  std::ifstream ifs {filename};
  std::ofstream ofs {result};

  char temp;
  std::string line;

  if (!ifs || !ofs){
    error("File operations failed.");
  }

  while(getline(ifs, line)){
    for (int i = 0; i < line.size(); ++i){
      line[i] = tolower(line[i]);
    }
    ofs << line << std::endl;
  }

}

int main(){
  std::string in_file {origin};

  copy_file_all_lower(in_file);

  return 0;
}
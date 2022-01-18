#include "../../../!_Misc/std_lib_facilities.h"

// Assumption is that the files only contains ints.

const std::string binary_file {"file9_b.bin"};
const std::string text_file {"file9_a.txt"};
const std::string result_file {"file9_out.txt"};


void binary_to_ascii(std::string ifilename, std::string ofilename);
void ascii_to_binary(std::string ifilename, std::string ofilename);

int main(){

  ascii_to_binary(text_file, binary_file);
  binary_to_ascii(binary_file, result_file);

  return 0;
}

void binary_to_ascii(std::string ifilename, std::string ofilename){
  ifstream ifs {ifilename, ios_base::binary};
  ofstream ofs {ofilename};

  if (!ifs || !ofs){
    error("Files not found.");
  }

  vector<int> ints;
  for (int x; ifs.read(as_bytes(x),sizeof(int));){
    ints.push_back(x);
  }

  for (int x : ints){
    ofs << x << std::endl;
  }
}

void ascii_to_binary(std::string ifilename, std::string ofilename){
  ifstream ifs {ifilename};
  ofstream ofs {ofilename, ios_base::binary};

  if (!ifs || !ofs){
    error("Files not found.");
  }

  vector<int> ints;
  for (int x; ifs >> x;){
    ints.push_back(x);
  }

  for (int x : ints){
    ofs.write(as_bytes(x), sizeof(int));
  }
}
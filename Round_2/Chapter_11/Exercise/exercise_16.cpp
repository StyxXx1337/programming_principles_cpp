#include "../../../!_Misc/std_lib_facilities.h"

const std::string file = "file16.txt";
const std::string out_file = "file16_out.txt";

vector<int>& parse_file(std::string filename, vector<int>& vec){
  ifstream ifs {filename};

  for(int numb; ifs >> numb;){
    vec.push_back(numb);
  }

  return vec;
}

int main(){
  std::string filename = {file};
  ofstream ofs {out_file};

  vector<int> numbers;
  numbers = parse_file(filename, numbers);

  sort(numbers.begin(), numbers.end());

  int counter = 1;
  for (int i = 0; i <numbers.size(); ++i){
    if (i > 0){
      if (numbers[i-1] == numbers[i]){
        counter++;
      }
      else{
        ofs << numbers[i-1];
        if (counter > 1){
          ofs << setw(5) << counter;
          counter = 1;
        }
        ofs << std::endl;
      }
    }
  }

  ofs << numbers[numbers.size()-1];
  if (counter > 1){
    ofs << counter;
  }

  return 0;
}
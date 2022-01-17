#include "../../../!_Misc/std_lib_facilities.h"

const std::string file = "file15.txt";
const std::string out_file = "file15_out.txt";
const int prec = 8;
const int field_with = 20;
const int fields = 4;

vector<double> read_numbers(std::string filename){
  vector<double> result;
  ifstream ifs {filename};

  if (!ifs){
    error("Input file not found.");
    return result;
  }

  for (double temp; ifs >> temp;){
    result.push_back(temp);
  }

  return result;
}

void write_to_file(vector<double> vec, ofstream& ofs){
  for (int i = 0; i <=100; i++){
    ofs << i%10;
  }
  ofs << std::endl << std::endl;

  for (int counter=0; counter<vec.size(); counter++){
    ofs << setw(field_with) << setprecision(prec) << fixed// << setprecision(prec)
        << vec[counter];

    if (((counter+1) % fields) == 0){
      ofs << std::endl;
    }
  }
}

int main(){

  vector<double> res;
  ofstream outfile {out_file};

  if(!outfile){
    error("Output file not found.");
    return 1;
  }

  res = read_numbers(file);
  write_to_file(res, outfile);

  return 0;
}
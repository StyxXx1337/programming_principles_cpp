#include "../../../!_Misc/std_lib_facilities.h"

const std::string f1 {"sorted_words1.txt"};
const std::string f2 {"sorted_words2.txt"};
const std::string output {"sorted_words_result.txt"};

void combine_sorted_files(std::string file1, std::string file2){
  ifstream ifs1 {file1};
  ifstream ifs2 {file2};
  ofstream ofs {output};

  std::string word1;
  std::string word2;

  if (!ifs1 || !ifs2 || !ofs){
    error("Files not available.");
  }

  ifs1 >> word1;
  ifs2 >> word2;
  // FIXME: Loop doesn't work yet...
  
  while(!(ifs1.eof() || ifs2.eof())){
    if (word1 < word2){
      ofs << word1 << ' ';
      ifs1 >> word1;
    }
    else if (word2 <= word1){
      ofs << word2 << ' ';
      ifs2 >> word2;
    }
    if (ifs1.eof()){
      cout << "IFS1 EOF. Word 1: " << word1;
    }
    else if (ifs2.eof()){
      cout << "IFS2 EOF. Word 2: " << word2;
    }
  }

  while (true){
    if (word1 < word2 || word2 == "!"){
      ofs << word1 << ' ';
      if (ifs1.eof()){
        break;
      }
      else{
        ifs1 >> word1;
      }
    }
    else if (word2 <= word1 || word1 == "!"){
      ofs << word2 << ' ';
      if (ifs2.eof()){
        break;
      }
      else{
        ifs2 >> word2;
      }
    }
  }
  
  if (ifs1.eof()){
    while(!ifs2.eof()){
      ofs << word2 << ' ';
      ifs2 >> word2;
    }
    ofs << word2;
  }
  else if (ifs2.eof()){
    while(!ifs1.eof()){
      ofs << word1 << ' ';
      ifs1 >> word1;
    }
    ofs << word1;
  }
}

int main(){
  std::string filename1 {f1};
  std::string filename2 {f2};
  combine_sorted_files(filename1, filename2);

  return 0;
}
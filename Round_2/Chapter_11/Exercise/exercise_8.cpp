#include "../../../!_Misc/std_lib_facilities.h"

const vector<std::string> nt_words {
                                    "can't", "won't", "don't", "wouldn't", "couldn't",
                                    "shouldn't", "mustn't", "haven't", "isn't",
                                    "aren't", "hasn't"
                                    };

const vector<std::string> not_words { "can", "will", "do", "would", "could",
                                      "should", "must", "have", "is", "are",
                                      "has"
                                      };


int in_exception_list(std::string str){
  int index = -1;
  for (int i = 0; i < nt_words.size(); ++i){
    if (nt_words[i] == str){
      return i;
    }
  }
  return index;
}

std::string parse_stream(std::string str){

  ostringstream os;
  std::string buffer;
  istringstream iss {str};

  for (char c; iss.get(c);){

    if (c == '\n'){
      break;
    }

    switch (c){
      case '.': case ',': case ';': case '!': case ':':{
        os << buffer << ' ';
        buffer = "";
        break;
      }
      // check for double quote to not tought the chars within.
      case '"':{
        os << c;
        iss.get(c);

        //  Do nothing until the next '"' is found.
        //! Not checking for closing '"'.
        while (c != '"' && !iss.eof()){
          os << c;
          iss.get(c);
        }
        os << c;
        buffer = "";
        break;
      }

      case ' ':{
        int index = in_exception_list(buffer);
        if ( index == -1 ){
          os << buffer << c;
          buffer = "";
        }
        else {
          os << not_words[index] << " not" << c;
          buffer = "";
        }
        break;
      }

      default:{
        buffer += c;
        break;
      }
    }
  }

  os << buffer;
  return os.str();
}

vector<std::string> make_dict(std::string str, vector<std::string> dict){

  vector<std::string> temp_vec;
  istringstream is {str};

  for(std::string word; is >> word;){
    temp_vec.push_back(word);
  }
  return temp_vec;
}


vector<std::string> clean_dict(vector<std::string> temp_vec){

  sort(temp_vec.begin(), temp_vec.end());

  vector<std::string> dict;

  for (int i=0; i<temp_vec.size(); ++i){
    if (dict.size() == 0){
      dict.push_back(temp_vec[i]);
    }
    else if (temp_vec[i] != dict[dict.size()-1]){
      dict.push_back(temp_vec[i]);
    }
  }

  return dict;
}

int main(){
  const std::string filename = "file8.txt";
  std::ifstream file {filename};
  vector<std::string> dict;
  int line_counter {0};

  while (!file.eof()){
    std::string file_line;
    getline(file, file_line);


    std::string parsed_str;
    parsed_str = parse_stream(file_line);

    dict = make_dict(parsed_str, dict);
    ++line_counter;
  }

  dict = clean_dict(dict);

  for (std::string s : dict){
    std::cout << s << std::endl;
  }

  std::cout << "\n\nThe file had " << line_counter << " lines.\n\n";

  return 0;
}
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

// TODO:  can't -> cannot
//        won't -> will not
//        don't -> do not
//        wouldn't -> would not
//        couldn't -> could not
//        should't -> should not
//        mustn't -> must not
//        haven't -> have not
//        isn't -> is not
//        aren't -> are not
//        hasn't -> has not{

int in_exception_list(std::string str){
  int index = -1;
  for (int i = 0; i < nt_words.size(); ++i){
    if (nt_words[i] == str){
      return i;
    }
  }
  return index;
}

int main(){
  ostringstream os;
  std::string buffer;

  for (char c; cin.get(c);){

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
        cin.get(c);

        //  Do nothing until the next '"' is found.
        //! Not checking for closing '"'.
        while (c != '"' && !cin.eof()){
          os << c;
          cin.get(c);
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

  std::cout << os.str() << std::endl;

  return 0;
}
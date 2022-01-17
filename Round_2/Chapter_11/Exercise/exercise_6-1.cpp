#include "../../../!_Misc/std_lib_facilities.h"

int main(){
  ostringstream os;

  for (char c; cin.get(c);){
    
    if (c == '\n'){
      break;
    }
    
    switch (c){
    case '.': case ',': case ';': case '-': case ':':
      os << ' ';
      break;
    // check for double quote to not tought the chars within.
    case '"':{
      os << c;
      cin.get(c);

      // Do nothing until the next '"' is found.
      // No not checking for closing '"'.
      while (c != '"' && !cin.eof()){
        os << c;
        cin.get(c);
      }
      os << c;
      break;
    }
    default:
      os << c;
      break;
    }
  }

  std::cout << os.str() << std::endl;
  return 0;
}
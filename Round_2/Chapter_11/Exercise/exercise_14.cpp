#include "../../../!_Misc/std_lib_facilities.h"

struct stats{
  int is_space {0};
  int is_alpha {0};
  int is_digit {0};
  int is_xdigit {0};
  int is_upper {0};
  int is_lower {0};
  int is_alnum {0};
  int is_cntrl {0};
  int is_punct {0};
  int is_print {0};
  int is_graph {0};

  void output(void){
    int spacer = 18;
    cout << setw(spacer)<< "Spaces: " << is_space << std::endl
          << setw(spacer) << "Alphabet: " << is_alpha << std::endl
          << setw(spacer) << "Digits: " << is_digit << std::endl
          << setw(spacer) << "Hex Digits: " << is_xdigit << std::endl
          << setw(spacer) << "Uppercase: " << is_upper << std::endl
          << setw(spacer) << "Lowercase: " << is_lower << std::endl
          << setw(spacer) << "Alphanumeric: " << is_alnum << std::endl
          << setw(spacer) << "Control: " << is_cntrl << std::endl
          << setw(spacer) << "Punctuation: " << is_punct << std::endl
          << setw(spacer) << "Print: " << is_print << std::endl
          << setw(spacer) << "Graphs: " << is_graph << std::endl;
  }
};

stats analyse_chars(std::string str){

  stats stat;

  for (char c : str){
    if (isspace(c)) { stat.is_space++; }
    if (isalpha(c)) { stat.is_alpha++; }
    if (isdigit(c)) { stat.is_digit++; }
    if (isxdigit(c)) { stat.is_xdigit++; }
    if (isupper(c)) { stat.is_upper++; }
    if (islower(c)) { stat.is_lower++; }
    if (isalnum(c)) { stat.is_alnum++; }
    if (iscntrl(c)) { stat.is_cntrl++; }
    if (ispunct(c)) { stat.is_punct++; }
    if (isprint(c)) { stat.is_print++; }
    if (isgraph(c)) { stat.is_graph++; }
  }

  return stat;
}



int main(){

  std::string line;
  getline(cin, line);

  stats stat;
  stat = analyse_chars(line);
  stat.output();
  return 0;
}
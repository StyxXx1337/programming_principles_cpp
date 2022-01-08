#include "../../../!_Misc/std_lib_facilities.h"


void analyse_chars(std::string str){
  std::string is_space;
  std::string is_alpha;
  std::string is_digit;
  std::string is_xdigit;
  std::string is_upper;
  std::string is_lower;
  std::string is_alnum;
  std::string is_cntrl;
  std::string is_punct;
  std::string is_print;
  std::string is_graph;

  for (char c : str){
    if (isspace(c)) { is_space += 'x'; } else { is_space += ' '; }
    if (isalpha(c)) { is_alpha += 'x'; } else { is_alpha += ' '; }
    if (isdigit(c)) { is_digit += 'x'; } else { is_digit += ' '; }
    if (isxdigit(c)) { is_xdigit += 'x'; } else { is_xdigit += ' '; }
    if (isupper(c)) { is_upper += 'x'; } else { is_upper += ' '; }
    if (islower(c)) { is_lower += 'x'; } else { is_lower += ' '; }
    if (isalnum(c)) { is_alnum += 'x'; } else { is_alnum += ' '; }
    if (iscntrl(c)) { is_cntrl += 'x'; } else { is_cntrl += ' '; }
    if (ispunct(c)) { is_punct+= 'x'; } else { is_punct += ' '; }
    if (isprint(c)) { is_print += 'x'; } else { is_print += ' '; }
    if (isgraph(c)) { is_graph += 'x'; } else { is_graph += ' '; }
  }

  const int spacer = 18;
  std::cout << setw(spacer) << "Input: "  << str << std::endl
            << setw(spacer) << "Is Space: "  << is_space << std::endl
            << setw(spacer) << "Is Alphabeth: "  << is_alpha << std::endl
            << setw(spacer) << "Is Digit: "  << is_digit << std::endl
            << setw(spacer) << "Is Hex Digit: "  << is_xdigit << std::endl
            << setw(spacer) << "Is Uppercase: "  << is_upper << std::endl
            << setw(spacer) << "Is Lowercase: "  << is_lower << std::endl
            << setw(spacer) << "Is Alphanumeric: "  << is_alnum << std::endl
            << setw(spacer) << "Is Control Sign: "  << is_cntrl << std::endl
            << setw(spacer) << "Is Punctuation: "  << is_punct << std::endl
            << setw(spacer) << "Is Printable: "  << is_print << std::endl
            << setw(spacer) << "Is Graphical: "  << is_graph << std::endl;


}



int main(){

  std::string in;
  getline(cin, in);

  analyse_chars(in);

  return 0;
}
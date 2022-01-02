#include "../../../!_Misc/std_lib_facilities.h"


int main(){
  int birth_year {1987};
  int this_year {2021};

  std::cout << "Birthyear in dec: \t" << showbase << birth_year << std::endl
            << "Birthyear in hex: \t" << hex << birth_year << std::endl
            << "Birthyear in oct: \t" << oct << birth_year << std::endl
            << "My Age: \t\t" << this_year - birth_year << std::endl;
}
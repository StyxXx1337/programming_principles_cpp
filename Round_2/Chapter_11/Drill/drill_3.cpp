#include "../../../!_Misc/std_lib_facilities.h"


int main(){
  int birth_year {1987};

  std::cout << "Birthyear in dec: " << showbase << birth_year << std::endl
            << "Birthyear in hex: " << hex << birth_year << std::endl
            << "Birthyear in oct: " << oct << birth_year << std::endl
            << "Birthyear in dec: " << dec << birth_year << std::endl;
}
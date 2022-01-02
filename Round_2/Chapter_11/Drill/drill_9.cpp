#include "../../../!_Misc/std_lib_facilities.h"


int main(){
  double number {1234567.89};

  std::cout << number << std::endl
            << std::fixed << number << std::endl
            << std::scientific << number << std::endl
            << std::defaultfloat << number << std::endl;

  // fixed shows the most precise information.. The others cut at least one digit.
}
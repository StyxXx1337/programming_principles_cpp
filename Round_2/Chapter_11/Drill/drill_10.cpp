#include "../../../!_Misc/std_lib_facilities.h"

int main(){

  std::cout << '|' << setw(15) << std::left << "Last name" 
            << '|' << setw(15) << "First name"
            << '|' << setw(15) << "Phone number"
            << '|' << setw(25) << "Mail address"<< '|' << std::endl
            << setw(74) << cout.fill('-') << '-' << cout.fill(' ') << std::endl;
  std::cout << '|' << setw(15) << std::left << "Osaka" 
            << '|' << setw(15) << "Naoko"
            << '|' << setw(15) << "080 1234 5678"
            << '|' << setw(25) << "n.o@gmail.com"<< '|' << std::endl
            << setw(74) << cout.fill('-') << '-' << cout.fill(' ') << std::endl;
  std::cout << '|' << setw(15) << std::left << "Matsuda" 
            << '|' << setw(15) << "Jessica"
            << '|' << setw(15) << "080 4321 5678"
            << '|' << setw(25) << "j.m@gmail.com"<< '|' << std::endl
            << setw(74) << cout.fill('-') << '-' << cout.fill(' ') << std::endl;
  std::cout << '|' << setw(15) << std::left << "Nakamura" 
            << '|' << setw(15) << "Misuke"
            << '|' << setw(15) << "080 5678 5678"
            << '|' << setw(25) << "m.n@gmail.com"<< '|' << std::endl
            << setw(74) << cout.fill('-') << '-' << cout.fill(' ') << std::endl;
  return 0;
}
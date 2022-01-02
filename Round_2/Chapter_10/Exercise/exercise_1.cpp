#include "../../../!_Misc/std_lib_facilities.h"

const std::string filename = "exercise_1.txt";

int main()
{
  ifstream ifs {filename};
  int temp {0};
  int counter = 0;
  int sum = 0;


  ifs >> temp;
  while(!ifs.eof()){
    ++counter;
    sum += temp;

    ifs >> temp;
    
    if (ifs.fail()){
      std::cout << "Failure occured.";
      break;
    }
    else if(ifs.bad()){
      std::cout << "Failure occured.";
      break;
    }
  }

  std::cout << "There are " << counter << " amount of numbers in the file.\n"
            << "They sum up to " << sum << std::endl;

  return 0;
}
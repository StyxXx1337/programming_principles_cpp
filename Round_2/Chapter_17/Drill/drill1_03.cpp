#include "../../../!_Misc/std_lib_facilities.h"

int main(){

  int* array_int = new int[10];

  for (int i = 0; i < 10; i++){
    std::cout << array_int[i] << std::endl;
  }

  delete[] array_int;

  return 0;
}
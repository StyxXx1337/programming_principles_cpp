#include "../../../!_Misc/std_lib_facilities.h"

int main(){
  int a, b, c, d;
  std::cin >> a >> oct >> b >> hex >> c >> d;
  std::cout << a << '\t' << b << '\t' << c << '\t' << a << std::endl;
  // a is decimal b is changed to oct and c is hex. 
  // cin the integer change is not permanent.
  // That's why d is again decimal.
}
#include "../../../!_Misc/std_lib_facilities.h"

bool is_leapyear(int year){
  if (year%4 == 0){
    if ((year % 100 == 0) && (year % 400 != 0) ) return false;
    return true;
  }
  
  return false;
}

// Helper function for print out
string bool_to_str(bool b){
  if (b == true){
    return "True";
  }
  return "False";
}

int main(){
  // Testing the function
  cout << "The year 1999 is a leap year: " << bool_to_str(is_leapyear(1999)) << endl
      << "The year 1880 is a leap year: " << bool_to_str(is_leapyear(1880)) << endl
      << "The year 2000 is a leap year: " << bool_to_str(is_leapyear(2000)) << endl
      << "The year 1700 is a leap year: " << bool_to_str(is_leapyear(1700)) << endl;
}
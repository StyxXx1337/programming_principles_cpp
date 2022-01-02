#include "../../../../!_Misc/std_lib_facilities.h"

#include "Patron.hpp"
#include "Date.hpp"
#include "Books.hpp"
#include <iostream>

int main(){

  Book a {"1-1-1-A"};

  cout << a.get_isbn();

  return 0;
}
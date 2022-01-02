#include "../../../../!_Misc/std_lib_facilities.h"
#include "Patron.hpp"

Patron::Patron(string name, int card_number, double fees)
  : n{name}, c_n{card_number}, f {fees}{
}

bool Patron::open_fees(){
  return(bool(f));
}

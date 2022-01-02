#include "../../../../!_Misc/std_lib_facilities.h"
#include "Date.hpp"

Date::Date(int y, int m, int d)
  : year{y}, month{m}, day{d}{
  if (y < 0 || y > 3000) error("Year out of range 0-3000");
  if (m < 1 || m > 12) error("Month out of range 1-12");
  if (d < 1 || d > 31) error("Day out of range 1-31");
}
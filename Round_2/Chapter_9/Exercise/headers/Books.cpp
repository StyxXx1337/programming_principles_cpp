#include "../../../../!_Misc/std_lib_facilities.h"
#include "Books.hpp"
#include "Date.hpp"

const vector<string> Gen_string{
  "Fiction", 
  "Non-Fiction", 
  "Biography", 
  "Children", 
  "Periodical", 
  "Undefined"
  };

Book::Book(string i)
  : isbn{i} 
  {  
  if (!is_valid_isbn(i)) error("invalid ISBN.");
  
  Date d {0,1,1};
  
  title = "Unknown";
  author = "Unknown";
  date = d;
  pages = 0;
  checked_out = false;
  genre = Genre::undefined;
}

Book::Book(string t, string a, string i, Date d, Genre g, int p)
  : title{t}, author{a}, isbn{i}, date{d}, genre{g}, pages{p}
  {
    if (!is_valid_isbn(i)) error("invalid ISBN.");
}

bool Book::is_valid_isbn(string i){
  int dash_counter = 0;

  for (int x = 0; x < i.size(); ++x){
    if (i[x] == '-'){ // make sure the amount of '-' is correct
      ++dash_counter;
    }
    else if (!isdigit(i[x])){ // checks if char is a digit
      if (x == (i.size() - 1)){
        return(isalpha(i[x]));
      }
      return false; // false if not digit or the last char is alpha
    }
  }
  if (dash_counter != 3){
    return false; // returns false if more not 3 '-' were in the string.
  }
  return true;

}
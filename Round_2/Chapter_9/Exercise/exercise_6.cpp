#include "../../../!_Misc/std_lib_facilities.h"

// ----------------------- Date Class ------------------------------------
// simple date struct without much checking
struct Date{
  Date(): year{0}, month{1}, day{1}{};
  Date(int y, int m, int d);

private:
  int year;
  int month;
  int day;
};

Date::Date(int y, int m, int d)
  : year{y}, month{m}, day{d}{
  if (y < 0 || y > 3000) error("Year out of range 0 - 3000");
  if (m < 1 || m > 12) error("Month out of range 1-12");
  if (d < 1 || d > 31) error("Day out of range 1-31");
}


//----------------- Book Class -------------------------------
class Book{

public:
// Constructor
  Book(string i);
  Book(string t, string a, string i, Date d, int p);

// Book Functions
  void check_out(){ checked_out = true; };
  void check_in() { checked_out = false; };
  bool is_valid_isbn(string i);

// Getters
  string get_author() const { return author; };
  string get_title() const { return title; };
  string get_isbn() const { return isbn; };
  int get_pages() const { return pages; };

// Operators
  bool operator==(const Book& lhs){
    return (this->get_isbn() == lhs.get_isbn());
  }

  bool operator!=(const Book& lhs){
    return (!(*this == lhs));
  }

private:
  string isbn;
  string title;
  string author;
  Date date;
  int pages;
  bool checked_out;
};

Book::Book(string i)
  : isbn{i} {
    
  if (!is_valid_isbn(i)) error("invalid ISBN.");
  
  Date d {0,1,1};
  
  title = "Unknown";
  author = "Unknown";
  date = d;
  pages = 0;
  checked_out = false;
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

// ------------------ Operator Overloading ----------------------------
// Part of exercise 6.
ostream& operator<<(ostream& os,const Book& b){
  return os << "Title: \t\t" << b.get_title() << endl
            << "Author: \t" << b.get_author() << endl
            << "ISBN: \t\t" << b.get_isbn() << endl
            << "Pages: \t\t" << b.get_pages();
}

int main(){

  Book b1 {"111-222-333-A"};
  Book b2 {"999-222-333-A"};
  Book copy1 {"111-222-333-A"};

  return 0;
}
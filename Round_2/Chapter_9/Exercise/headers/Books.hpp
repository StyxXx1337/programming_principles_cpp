#ifndef _BOOKS_H_
#define _BOOKS_H_

#include "../../../../!_Misc/std_lib_facilities.h"
#include "Date.hpp"

// enum for Genre of videos
enum class Genre{
  fiction=0, nonfiction, biography, children, periodical, undefined
};
//const vector<string> Gen_string;

//----------------- Book Class -------------------------------
class Book{

public:
// Constructor
  Book(string i);
  Book(string t, string a, string i, Date d, Genre g, int p);

// Book Functions
  void check_out(){ checked_out = true; };
  void check_in() { checked_out = false; };
  bool is_valid_isbn(string i);

// Getters
  string get_author() const { return author; };
  string get_title() const { return title; };
  string get_isbn() const { return isbn; };
  Genre get_genre() const { return genre; };
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
  Genre genre;
  int pages;
  bool checked_out;
};

#endif // _BOOKS_H_
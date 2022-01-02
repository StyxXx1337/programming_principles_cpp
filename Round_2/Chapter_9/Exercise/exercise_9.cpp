#include "../../../!_Misc/std_lib_facilities.h"

// enum for Genre of videos
enum class Genre{
  fiction=0, nonfiction, biography, children, periodical, undefined
};

const vector<string> Gen_string{
  "Fiction", 
  "Non-Fiction", 
  "Biography", 
  "Children", 
  "Periodical", 
  "Undefined"
  };

// ----------------------- Date Class ------------------------------------
// simple date struct without much checking
struct Date{
  Date(): year{0}, month{1}, day{1}{};
  Date(int y, int m, int d);
  int get_year() const { return year; };

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
  bool is_checked_out() const { return checked_out; };
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

Book::Book(string i)
  : isbn{i} {
    
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
  :title{t}, author{a}, isbn{i}, date{d}, genre{g}, pages{p}
  {
    if (!is_valid_isbn(i)) error("invalid ISBN.");
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

//----------------------------Patron Class------------------------------
class Patron{
public:
  Patron();
  Patron(string name, int card_number, double fees);
  bool open_fees() const;
  string name() const { return n; };
  int card_number() const { return c_n; };
  double fees() const { return f; };

  //---------------- Operators ----------------
  bool operator==(const Patron& p){
    return (this->c_n == p.c_n);
  }

private:
  string n;
  int c_n;
  double f;
};

Patron::Patron(string name, int card_number, double fees)
  : n{name}, c_n{card_number}, f{fees}{
}

bool Patron::open_fees() const{
  return(bool(f));
}

// ---------------------- Transaction Struct --------------------------
struct Transaction{
public:
  Transaction(Book b, Patron p, Date d)
  : bo{b}, pa{p}, da{d}{
  }
  Book book() const { return bo; };
  Patron patron() const { return pa; };
  Date date() const {return da; };

private:
  Book bo;
  Patron pa;
  Date da;
};

// ------------------ Library Class -----------------------------------
class Library{
  public:
  Library();
  Library(vector<Book> b, vector<Patron> p);

  // Helpers
  bool patron_in_lib(const Patron& p) const;
  bool book_in_lib(const Book& b) const;
  vector<Transaction> get_transactions() const { return transactions; };

  void add_book(Book b);
  void add_patron(Patron p);
  bool checkout_book(Patron p, Book b);
  vector<Patron> open_fees();


  private:
  vector<Book> books;
  vector<Patron> patrons;
  vector<Transaction> transactions;
};

Library::Library(){
  // vectors to be empty;
}

Library::Library(vector<Book> b, vector<Patron> p)
  : books{b}, patrons{p}{
}

void Library::add_book(Book b){
  books.push_back(b);
}

void Library::add_patron(Patron p){
  patrons.push_back(p);
}

bool Library::patron_in_lib(const Patron& p) const{
  for (auto patron : patrons){
    if (patron == p) return true;
  }
  return false;
}

bool Library::book_in_lib(const Book& b) const{
  for (auto book : books){
    if (book == b) return true;
  }
  return false;
}

bool Library::checkout_book(Patron p, Book b){
  if (!patron_in_lib(p)) error("No such Patron");
  if (p.open_fees()) error("Open fees");
  
  if (!book_in_lib(b)) error("Book not in Library");
  if (b.is_checked_out()) error("Book checked out");
  
  /**
  * TODO: @Kevin  checkout book
  * Book in the Library::books vector needs to be modified.
  */

  Date d {1800,9,9};
  b.check_out(); // book in books-vector will not be changed.
  transactions.push_back(Transaction{b,p,d});
  return true;
}

// ------------------ Operator Overloading ----------------------------
// Added an operator<< for the Genre Class
ostream& operator<<(ostream& os, const Genre g){
  return os << Gen_string[int(g)];
}

// Book operator<< overload
ostream& operator<<(ostream& os, const Book& b){
  return os << "Title: \t\t" << b.get_title() << endl
            << "Author: \t" << b.get_author() << endl
            << "ISBN: \t\t" << b.get_isbn() << endl
            << "Pages: \t\t" << b.get_pages() << endl
            << "Genre: \t\t" << b.get_genre();
}

// Patron operator<< overload
ostream& operator<<(ostream& os, Patron p){
  return os << "Name: \t\t" << p.name() << endl
            << "Card ID: \t" << p.card_number() << endl
            << "Open Fees: \t" << p.fees();
}

// Transaction operator<< overload
ostream& operator<<(ostream& os, Transaction t){
  return os << "Book Author: \t\t" << t.book().get_author() << endl
            << "Patron Name: \t\t" << t.patron().name() << endl
            << "Borrow Date Year: \t" << t.date().get_year();
}

int main(){

  /** Testing the Libraray **/
  // Make Users
  Patron p1 {"Adam", 1, 0.0};
  Patron p2 {"Betty", 2, 1.0};
  Patron p3 {"Carlos", 3, 2.0};
  Patron p4 {"Dirk", 4, 0.0};
  Patron p5 {"Thief", 99, 0.0};

  //Book(string t, string a, string i, Date d, Genre g, int p)
  Book b1 {"Book A", "Author A", "1-1-1-A", Date {1850,5,5}, Genre::biography, 100};
  Book b2 {"Book B", "Author B", "1-1-2-B", Date {1900,5,15}, Genre::fiction, 120};
  Book b3 {"Book C", "Author C", "1-1-3-C", Date {1950,5,25}, Genre::nonfiction, 130};
  Book b4 {"Book D", "Author D", "1-1-4-D", Date {2000,6,5}, Genre::periodical, 140};
  Book b5 {"Not in Lib", "Author E", "1-1-5-D", Date {2011,6,5}, Genre::fiction, 999};

  // Make a library
  Library L;

  // Adding Users and Books to the Library
  L.add_patron(p1);
  L.add_patron(p2);
  L.add_patron(p3);
  L.add_patron(p4);
  
  L.add_book(b1);
  L.add_book(b2);
  L.add_book(b3);
  L.add_book(b4);
  
  // Checkout Books
  L.checkout_book(p1, b4);
  L.checkout_book(p1, b3);
  L.checkout_book(p4, b4);

  // See the transactions...
  cout << L.get_transactions()[0] << endl;
  cout << L.get_transactions()[1] << endl;
  cout << L.get_transactions()[2] << endl;

  // Throw Error:
  /*
  L.checkout_book(p3, b1); // has open fees
  L.checkout_book(p5, b1); // Patron not in Lib
  L.checkout_book(p1, b5); // Book not in Lib
  */
  return 0;
}
#include "../../../!_Misc/std_lib_facilities.h"

class Patron{
public:
  Patron();
  Patron(string name, int card_number, double fees);
  bool open_fees();
  string name() { return n; };
  int card_number() { return c_n; };
  double fees() { return f; };

private:
  string n;
  int c_n;
  double f;
};

Patron::Patron(string name, int card_number, double fees)
  : n{name}, c_n{card_number}, f {fees}{
}

bool Patron::open_fees(){
  return(bool(f));
}

ostream& operator<<(ostream& os, Patron p){
  return os << "Name: \t\t" << p.name() << endl
            << "Card ID: \t" << p.card_number() << endl
            << "Open Fees: \t" << p.fees();
}

int main(){
  Patron p {"Mike Meyers", 12341234, 100.0};
  cout << ((p.open_fees() == true) ? "Yes" : "No") << endl;
  cout << p << endl;
}
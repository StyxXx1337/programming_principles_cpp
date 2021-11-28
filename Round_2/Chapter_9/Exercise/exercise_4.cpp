#include "../../../!_Misc/std_lib_facilities.h"

struct X{
    void f(int x){ 
      struct Y {
        int f() { return 1; }
        int m; // not used and will go out of scope.
      };
    int m;
    m = x; // m & x are not used and will go out of scope.
    Y m2;
    return f(m2.f()); // m2.f() returns "1";
    }
  int m; // not used
  void g(int m){ // new var m
    if (m) f(m+2); // if m != 0 then it will call f(m+2) but f() always returns 1;
    else{
      g(m+2); // otherwise it will call itself with m+2 which will into the if clause;
    }
  }
  X() {} // defines a method X in struct X that doesn't do anything
  void m3() {} // defines a method m3 in struct X that doesn't do anything
  
  void main(){
    X a; // declares a struct of itself.
    a.f(2); // calls X::f() with value 2, X::f() always returns 1;
  }
};

int main(){
  X test;
  
  return 0;
}
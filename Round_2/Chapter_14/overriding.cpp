#include <string>
#include <iostream>

struct B {
  virtual void f() const { std::cout << "B::f "; };
  void g() const { std::cout << "B::g "; };
};

struct D : B {
  void f() const { std::cout << "D::f "; };
  void g() { std::cout << "D::g "; };
};

struct DD : D {
  void f() { std::cout << "DD::f "; };
  void g() const { std::cout << "DD::g "; };
};

void call(const B& b){
  b.f();
  b.g();
}

int main(){

  B b;
  D d;
  DD dd;

  call(b);
  call(d);
  call(dd);

  b.f();
  b.g();

  d.f();
  d.g();

  dd.f();
  dd.g();

  return 0;
};
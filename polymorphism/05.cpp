#include <iostream>
using namespace std;

class Base {
public:
  virtual void show() { 
    cout << "Hello from Base\n"; 
  }
};

class Derived : public Base {
public:
  void show() { 
    cout << "Hello from Derived\n"; 
  }
};

int main() {
  Base *b;
  Derived obj;
  b = &obj;
  b->show(); // calls Derived::show() because show() is virtual
  return 0;
}
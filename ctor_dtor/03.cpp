#include<iostream>
using namespace std;

class Customer{
  string name;
  int *data;

  public:

  Customer(){
    name = "4";
    cout<<"constructor is "<<name<<endl;


  }



  Customer(string name){
    this->name = name;
    cout<<"constructor is "<<name<<endl;
  }


  ~Customer(){
    cout<<"destructor is "<<name<<endl;
  }
};

int main(){
  Customer a1("1"),a2("2"),a3("3");
  Customer *a4 = new Customer;
  delete a4;


}


// In C++, when objects are created on the stack (like your a1, a2, a3), their constructors are called in the order of creation:

// a1 ➔ a2 ➔ a3
// When the main() function ends, C++ automatically destroys these objects.

// Destructors are called in the reverse order of construction:
// a3 ➔ a2 ➔ a1
// Why Reverse Order?

// This follows the Last-In, First-Out (LIFO) principle.
// It ensures that if one object depends on another (e.g., uses its resources), the dependent object is destroyed first.
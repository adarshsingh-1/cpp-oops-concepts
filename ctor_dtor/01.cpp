#include<iostream>
using namespace std;

class Customer{

  string name;
  int accNo;
  int balance;
  
  public:
  //Default Constructor
  Customer() {
    cout<<"Default Constructor Called"<<endl;
    name = "Adarsh";
    accNo = 124;
    balance = 1000;
  }
  // Parameterized Constructor
  Customer(string n, int a, int b) {
    name = n;
    accNo = a;
    balance = b;
  }

  // Customer(string name, int accNo, int balance) {
  //   this->name = name;
  //   this->accNo = accNo;
  //   this->balance = balance;
  // }

  //constructor overloading
  Customer(string a, int b){
    name = a;
    accNo = b;
    // balance = 50;//by default
  }

  //inline constructor
  inline Customer(string a, int b, int c): name(a), accNo(b), balance(c){


  }

  //copy constructor
  Customer(Customer &B){
    name = B.name;
    accNo = B.accNo;
    balance = B.balance;
  }
  void display(){
    cout<<name<<" "<<accNo<<" "<<balance<<" "<<endl;
  }

};


int main(){

  Customer a1;
  Customer a2("Adarsh", 10, 1000);
  Customer a3("Mohit",25);
  a3.display(); 
  a2.display();
  //default copy constructor
  Customer a4(a3);
  a4.display();
  Customer a5;
  a5 = a3;
  a3.display()

  return 0;
}
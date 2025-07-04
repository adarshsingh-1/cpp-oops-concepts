#include<iostream>
using namespace std;

class Customer {
  string name;
  int balance;
  int age;

  public:
  Customer(string a, int b, int c) {
    name = a;
    balance = b;
    age = c;
  }

  void updateAge(int age){
    if(age > 0 && age < 100){
      this->age = age; 
    }else{
      cout<<"Invalid Age";
    }
  }

  void deposit(int amount) {
    if(amount > 0) {
      balance += amount;
      cout << "New Balance: " << balance << endl;
    } else {
      cout << "Invalid deposit amount" << endl;
    }
  }

  void withdraw(int amount) {
    if(amount <= balance && amount > 0){
      balance-=amount;
    }
  }
};

int main() {
  Customer a1("John", 12345, 25);
  a1.deposit(500);    // valid
  a1.deposit(-100);   // invalid
}
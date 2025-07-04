#include<iostream>
using namespace std;



class Customer{
  string name;
  int accNo;
  int balance;
  static int totalCustomer;
  static int totalBalance;
  
  public:
  

  Customer(string name, int accNo, int balance){
    this->name = name;
    this->accNo = accNo;
    this->balance = balance;
    totalCustomer++;
    totalBalance+=balance;
  }

  static void accStatic(){ //this function belongs to the class and cannot access the members of the class
    cout<<"Total Number of Customer "<<totalCustomer<<endl;
    cout<<"Total Balance present in the bank "<<totalBalance<<endl;
  }

  void deposit(int amt){
    if(amt>0){
      balance+=amt;
      totalBalance+=amt;
    }
  }

  void withdraw(int amt){
    if(amt <= balance && amt > 0){
      balance-=amt; 
      totalBalance-=amt;
    }
  }

  void display(){
    cout<<name<<" "<<accNo<<" "<<balance<<" "<<totalCustomer<<" "<<endl;
  }

  void display_total(){
    cout<<totalCustomer<<endl;
  }
};

int Customer::totalCustomer=0;
int Customer::totalBalance=0;

int main(){
  Customer a1("Calvin", 1, 1000);
  Customer a2("John", 2, 5000);
  // a1.display();
  // a2.display();
  Customer a3("Henry", 5, 8000);
  // a3.display();
  // a2.display_total();
  // Accessing the Total Customer Directly if it is in public 
  // Customer::totalCustomer = 5;
  a1.display_total();
  //if it is in prtivate so we need to create a function for the same
  a1.deposit(4000);
  a2.withdraw(1000);
  Customer::accStatic();
  
}
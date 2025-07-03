#include<iostream>
using namespace std;

class Customer{
  string name;
  int *data;

  public:

  Customer(){
    cout<<"Constructor is Called"<<endl;
    name = "Adarsh";
    data = new int;
    *data = 10;
  }

  //Destructor
  ~Customer(){
    cout<<"Destructor is called"<<endl;
  }

};

int main(){
  Customer a1;
}
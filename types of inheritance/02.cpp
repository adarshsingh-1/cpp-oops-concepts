#include<iostream>
using namespace std;

class Human{

  protected:
  string name;
  int age;

  public:
  Human(string name, int age){
    this->name = name;
    this->age = age;
  }

  void display(){
    cout<<name<<age;
  }

  void work(){
    cout<<"I am WOrkdig\n";
  }


};

class Student : public Human{
  int rollNo, fees;
  public:
  Student(string name, int age, int rollNo, int fees): Human(name, age){
    this->rollNo = rollNo;
    this->fees = fees;
  }
  void display(){
    cout<<name<<" age is "<<age<<" rollNo is "<<rollNo<<" fees is "<<fees<<endl;

  }
};

int main(){ 
  Student a1("Rohit",26, 32, 99);
  a1.display();
}
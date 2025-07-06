#include<bits/stdc++.h>
using namespace std;

//mutli-level inhertance


class Person{
  protected:
   string name;

   public:

   void introduce(){
    cout<<"Hello my name is: "<<name<<endl;
   }
};

class Employee:public Person{
  protected:
  int salary;

  public:
  void monthly_salary(){
    cout<<"My monthly salary is: "<<salary<<endl;
  }
};


class Manager : public Employee{
  public:
  string dept;
  
  Manager(string name, int salary, string dept){
    this->name = name;
    this->salary = salary;
    this->dept = dept;
  };

  void work(){
    cout<<"i am leading the dept "<<dept;
  }


};

int main(){
  Manager a1("Rohit",200, "Marketing");
  a1.introduce();

}
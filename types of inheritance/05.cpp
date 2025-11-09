//hybrid inhertance 
#include<iostream>
using namespace std;

class Human{

  protected:
  string name;
  int age;

  public:

  Human(){

  }
  Human(string name, int age){
    this->name = name;
    this->age = age;
  }

  void work(){
    cout<<"I am working\n";
  }

};

class Student : public Human
{
  int rollNo, fees;

  public:

  Student(string name, int age, int rollNo, int fees){
    this->name = name;
    this->age = age;
    this->rollNo = rollNo;
    this->fees = fees;
  }
  void display(){
    cout<<name<<" "<<age<<" "<<rollNo<<" "<<fees<<endl;
  }

};


class Teacher: public Human{
  int salary;
  public:
  Teacher(int salary, string name, int age){
    this->salary = salary;
    this->name = name;
    this->age = age;
  }

  void display(){
    cout<<name<<" "<<age<<" "<<salary<<endl;
  }
};

int main(){ 
  Student a1("Rphit",26, 32, 99);
  a1.display();
  Teacher a2(99,"Mohit", 23);
  a2.display();

}
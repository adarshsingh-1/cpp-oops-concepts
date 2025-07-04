
#include<iostream>
using namespace std;

class Human{
  string Religion, color;

  protected:
  string name;
  int age, weight;
};

class Student: protected Human{
  private:
  int rollNo, fees;

  public:
  Student(string name, int age, int weight, int rollNo, int fees){
    this->name = name;
    this->age = age;
    this->weight = weight;
    this->rollNo = rollNo;
    this->fees = fees;  
  }

  void display(){
    cout<<"name is  "<<name<<" age is "<<age<<" weight is "<<weight<<" rollNo is "<<rollNo<<" fees is "<<fees<<endl;
  }

};

class Teacher : public Human{
  int salary, id;
};


int main(){

  Student a("Adarsh", 10, 500, 77, 200);
  a.display();
  Teacher b;
  b.name = "ritu"

  return 0;
}




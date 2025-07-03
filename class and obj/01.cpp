#include<iostream>
using namespace std;

class Student{
  public:
  string name;
  int age, roll_no;
  string grade;

};

int main(){

  //creating first object of the user defined datatype
  Student s1;
  s1.name = "Adarsh";
  s1.age = 10;
  s1.roll_no = 21;
  s1.grade = "A+";

  cout<<s1.age<<endl;

  //creating another object
  Student s2;
  s2.name = "Raju";
  s2.age = 11;
  s2.roll_no = 21;
  s2.grade = "B+";

  cout<<s2.name<<endl;

}


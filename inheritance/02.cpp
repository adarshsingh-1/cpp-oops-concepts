
#include<iostream>
using namespace std;

class Human{

  protected:
  string name;
  int age, weight;
};

class Student: protected Human{
  private:
  int rollNo, fees;

  public:
  void fun(string n, int a, int w){

    name = n;
    age = a;
    weight = w;
  }

  void display(){
    cout<<name<<" "<<age<<" "<<weight<<endl;
  }
};


int main(){

  Student a;
  a.fun("Adarsh", 10, 50);
  a.display();

  return 0;
}




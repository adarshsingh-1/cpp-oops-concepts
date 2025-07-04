// Pure Virtual Function

#include<bits/stdc++.h>
using namespace std;

class Animal{
  public:
  virtual void speak() = 0;
};

class Dog : public Animal {
  public:
  void speak() {
    cout << "Dog barks" << endl;
  }
  // void roti(){
  //   cout<<"Hello From Roti"<<endl;
  // }
};


class Cat : public Animal {
  public:
  void speak() {
    cout << "Cat Meows" << endl;
  }

};



int main(){  
  Animal *a; //deciding at compile time which speak to choose
  a = new Dog(); 
  // a->roti(); //class Animal has no member named 'roti'

  Animal *p;
  vector<Animal*>animals;
  animals.push_back(new Dog());
  animals.push_back(new Cat());
  animals.push_back(new Animal());
  animals.push_back(new Cat());
  animals.push_back(new Dog());

  for(int i = 0;i<animals.size();i++){
    p = animals[i];
    p->speak();
  }

}
//Hybrid Inheritance

//student
//boy
//girl
//male
//female


#include<iostream>
using namespace std;


class Student{
  public:
  void print(){
    cout<<"I am Student\n";
  }
};


class Male{
  public:
  void malePrint(){
    cout<<"I am a male\n";
  }
};

class Female{
  public:
  void femalePrint(){
    cout<<"I am a female\n";
  }
};


class Boy: public Student, public Male{
  public:
  void BoyPrint(){
    cout<<"I am a Boy\n";
  }
};


class Girl: public Student, public Female{
  public:
  void GirlPrint(){
    cout<<"I am a Girl\n";
  }
};


int main(){

  Girl g1;
  g1.print();
  Boy b1;
  b1.malePrint();

}
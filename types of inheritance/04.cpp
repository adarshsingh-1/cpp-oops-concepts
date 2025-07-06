//multiple inheritance

#include<iostream>
using namespace std;

class Engineer{


  void money(){
    cout<<"Hello Money baby"<<endl;
  }


  public:
  string specialization;


  Engineer(){
    cout<<"Hello Enginner"<<endl;
  }

  void work(){
    cout<<"I have specialization in "<<specialization<<endl;
  }
};


class Youtuber{
  public:
  int subscribers;

  Youtuber(){
    cout<<"Hello Youtuber"<<endl;
  }

  void contentCreator(){
    cout<<"I have as subscriber of "<<subscribers<<endl;
  }
};

class CodeTeacher: public Engineer, public Youtuber{
  public: 
  string name;

  CodeTeacher(){
    cout<<"Hello CT"<<endl;
  }

  CodeTeacher(string name, string specialization, int subscribers ){
    this->name = name;
    this->subscribers = subscribers;
    this->specialization = specialization;
  }

  void showcase(){
    cout<<"My name is "<<name<<endl; 
    work();
    contentCreator();
  }

};


int main(){
  CodeTeacher a1;
  CodeTeacher a2("Adarsh", "CSE", 49000);
  a2.showcase();

}
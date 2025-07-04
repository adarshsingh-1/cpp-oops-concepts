#include<bits/stdc++.h>
using namespace std;

class exception{
  protected: 
  string msg;

  public:
  exception(string msg){
    this->msg = msg
  }

  // void what(){
  //   cout<<msg<<endl;
  // }
  //or
  string what(){
    return msg
  }
};

int main(){
  
  try{
    int *p = new int[100000000000000000];
    cout<<"Memory allocation is successfull \n"; 
    delete []p;
  }
  //bab_alloc child class of exception
  catch(const bad_alloc &e){
    cout<<"Exception Occured due to line 9 "<<e.what()<<endl;

  }

}
#include<bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  cin>>a>>b;
  int c = a/b;
  if(b==0){
    cout<<"Divided by zero is not possible\n";
    return 0;
  }
  cout<<c<<endl;
  return 0;
}

//using try catch method

try{
  if(b==0){
    throw "Divided by zero is not possible"
    int c = a/b;
    cout<<c<<endl;
  }
}
ctach(const char *e){
  cout<<"Exception Occured \n"<<e<<endl;
}
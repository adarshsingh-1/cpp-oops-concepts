#include<iostream>
using namespace std;


// 0 1 2 3 4 5 6 7 8 9
// Total = 4 + 1 + 1 + 2 = 8 bytes (2 padding)
//int a 0-3
// char c 4
// char b 5
// padding 6-7

class Student {
  int a;
  char c;
  char b;
};

int main(){
  Student obj;
  cout<<sizeof(obj)<<endl;
}


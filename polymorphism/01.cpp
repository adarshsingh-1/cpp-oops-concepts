#include<iostream>
using namespace std;

class Area{
  public:
  int calArea(int r){ //circle
    return 3.14 * r * r;
  }
  int calArea(int l, int b){ //rectagle
    return l * b;
  }
};


int main(){
  Area a1;
  cout<<a1.calArea(4)<<endl;
  Area a2;
  cout<<a2.calArea(3, 4); //rectangle
  cout<<a2.calArea("Adarsh"); //rectangle
}



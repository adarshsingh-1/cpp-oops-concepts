#include<iostream>
#include<fstream>

using namespace std;

int main(){
  //file ko open krna 
  ifstream fin;
  fin.open("Hello.txt"); //if the file is not present it will create one and open
  char c;
  fin>>c;
  while(!fin.eof()){
    cout<<c;
    fin>>c;
  };

  fin.close(); //resource release kar pauon
}

//prints with space
  ifstream fin;
  fin.open("Hello.txt"); //if the file is not present it will create one and open
  char c;
  c = fin.get();
  while(!fin.eof()){
    cout<<c;
    c = fin.get();
  };

  fin.close(); //resource release kar pauon
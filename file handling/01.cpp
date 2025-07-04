#include<iostream>
#include<fstream>

using namespace std;

int main(){
  //file ko open krna 
  ofstream fout;
  fout.open("Hello.txt"); //if the file is not present it will create one and open
  fout<<"File Handling By Coder Army";

  fout.close(); //resource release kar pauon
}


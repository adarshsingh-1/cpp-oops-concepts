#include<bits/stdc++.h>
using namespace std;

int main(){
  ofstream fout;
  fout.open("file.txt");
  fout<<"Hello India\n";
  fout<<"Hello Rohit\n";
  fout<<"Hello Bhai\n";

  ifstream fin;
  fin.open("file.txt");

  string line;

  while(getline(fin, line)){
    cout<<line<<endl;
  }
  fin.close();
}
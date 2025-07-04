#include<bits/stdc++.h>
#include<fstream>
#include<vector>
using namespace std;

int main(){
  vector<int> arr(5);
  cout<<"Enter the input: ";
  for(int i = 0;i<5;i++){
    cin>>arr[i];
  }


  //file ko open kro

  ofstream fout;
  fout.open("array.txt");

  fout<<"Original Data\n";



  for(int i = 0;i<5;i++){
    fout<<arr[i]<<" ";
  };

  fout<<"Sorted data: \n";

  sort(arr.begin(), arr.end());

  for(int i = 0;i<5 ; i++){
    fout<<arr[i]<< " ";
  };

  fout.close();
}
// Dynamic Memory Allocation (DMA) for Objects in C++
// Creating Objects on the Heap or Heap Allocation of Objects


// Dynamic Memory Allocation means allocating memory at runtime instead of compile-time.
// In C++, we use the new keyword to allocate memory dynamically on the heap.

#include<iostream>
using namespace std;

//  I’m using dynamic memory allocation to create an object of the Student class on the heap, and I access it using a pointer to object.

class Student{
  public:
  string name;
  int age, roll_number;
  string grade;

};





int main(){
  Student *s1 = new Student;
  (*s1).name = "Adarsh";
  // Accessing members using dereferencing.
  (*s1).age = 10;
  (*s1).roll_number= 1;
  (*s1).grade = "A+";

  cout<<s1->name<<" ";
  cout<<s1->age<<" ";
  cout<<s1->roll_number<<" ";
  cout<<s1->grade<<" ";

  return 0;
}
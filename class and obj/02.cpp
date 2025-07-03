#include<iostream>
using namespace std;

class Student {
  private:
    string name;
    int age, roll_no;
    string grade;

  public:
    // Setter functions (to set values)
    void setName(string n) {
        name = n; 
    }

    void setAge(int x) {
        age = x;
    }

    void setRoll_no(int r) {
        roll_no = r;
    }

    void setGrade(string s) {
        grade = s;
    }

    // Getter functions (to get values)
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    int getRoll_no() {
        return roll_no;
    }

    string getGrade() {
        return grade;
    }
};

int main() {
  Student s1;

  // Using setter functions to assign values
  s1.setName("Adarsh");
  s1.setAge(10);
  s1.setRoll_no(1);
  s1.setGrade("A+");

  // Using getter functions to retrieve and print values
  cout << "Name: " << s1.getName() << endl;
  cout << "Age: " << s1.getAge() << endl;
  cout << "Roll No: " << s1.getRoll_no() << endl;
  cout << "Grade: " << s1.getGrade() << endl;

  return 0;
}

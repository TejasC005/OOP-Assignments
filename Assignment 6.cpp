//Assignment 6
/*A hospital management system needs to streamline its operations by
organizing various types of personnel and services. The system should
manage different roles such as doctors, nurses, and administrative staff. 
Create the Different classes like Person, Doctor ,Nurse, Administrate
Staff. Use the concept of Inheritance.*/
#include<iostream>

using namespace std;

//Base class
class Person {
  public: int age,
  id,
  sal;
  string name,
  ds;
  virtual void accept() = 0; //Accept function as pure virtual function
  virtual void display() = 0;
};
//sub class
class doctor: public Person {
  public: void accept();
  void display();
};
//sub class
class Astaff: public Person {
  public: void accept();
  void display();
};
//sub class
class Nurse: public Person {
  public: void accept();
  void display();
};
//Accept fuction for Doctor class
void doctor::accept() {
  cout << "Enter details:" << endl;
  cout << "NAME : ";
  cin >> name;
  cout << "AGE : ";
  cin >> age;
  cout << "ID : ";
  cin >> id;
  cout << "Designation: ";
  cin >> ds;
}
//Accept function for Astaff class
void Astaff::accept() {
  cout << "Enter details:" << endl;
  cout << "NAME : ";
  cin >> name;
  cout << "AGE : ";
  cin >> age;
  cout << "ID : ";
  cin >> id;
  cout << "Salary : ";
  cin >> sal;
  cout << "Designation: ";
  cin >> ds;
}
//Accept function for patient class
void Nurse::accept() {
  cout << "Enter details:" << endl;
  cout << "NAME : ";
  cin >> name;
  cout << "AGE : ";
  cin >> age;
  cout << "ID : ";
  cin >> id;
  cout << "Salary : ";
  cin >> sal;
  cout << "Designation: ";
  cin >> ds;
}
//Display function for Doctor class
void doctor::display() {
  cout << id << "\t" << ds << "\t" << name << "\t" << age << "\t" << endl;
}
//Display function for Patient class
void Nurse::display() {
  cout << id << "\t" << ds << "\t" << name << "\t" << age << "\t" << sal << endl;
}
//Display functiuon for Astaff class
void Astaff::display() {
  cout << id << "\t" << ds << "\t" << name << "\t" << age << "\t" << sal << endl;
}

int main() {
  doctor a;
  Astaff b;
  patient c;

  a.accept();
  b.accept();
  c.accept();
  a.display();
  b.display();
  c.display();

  return 0;
}

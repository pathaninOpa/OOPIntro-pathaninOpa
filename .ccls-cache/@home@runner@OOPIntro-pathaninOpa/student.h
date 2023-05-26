#include <iostream>
using namespace std;

class student{
private:
  long id;
  string name;
  int age;

public:
  void set_name(string="Tae");
  void print_name();
  void set_age(int yr);
  int get_age();
};

void student::set_name(string n){
  name=n;
}

void student::print_name(){
    cout<<"Name: "<<name;
}

void student::set_age(int yr){
  age= yr;
}

int student::get_age(){
  return age;
}

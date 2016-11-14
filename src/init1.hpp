#ifndef _NS3_H
#define _NS3_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


class Person{
private:
  string name;
  unsigned int walked_distance;
public:
  string GetName();
  unsigned int GetWalkedDistance();
  void Walk(unsigned int distance);
  Person(string cname);
  ~Person();
};

// - "Ewwww, why use forward declaration if you're gonna define it here?"
// - "Because I want to focus on the point of the slide. Grrrrr."

string Person::GetName(){
  return name;
}

unsigned int Person::GetWalkedDistance(){
  return walked_distance;
}

void Person::Walk(unsigned int distance){
  walked_distance += distance;
}

Person::Person(string cname){
  name = cname;
  walked_distance = 0;
}

// The "destructor" has a tilde in front of it.
// Use to clean up whatever you need (e.g. flush an IO, close a database, etc.)
Person::~Person(){
  cout << "\"Sarah Connor?\" - The Terminator." << endl;
}

#endif

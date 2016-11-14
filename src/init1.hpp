#ifndef _NS3_H
#define _NS3_H

#include <iostream>
#include <string>

using std::string;

class Person{
private:
  string name;
  unsigned int walked_distance;
public:
  string GetName();
  unsigned int GetWalkedDistance();
  void Walk(unsigned int distance);
  Person(string cname);
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

#endif

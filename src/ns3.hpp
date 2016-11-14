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
#endif

#include "ns3.hpp"

using std::cout;
using std::endl;

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


int main(){
  Person Alice("Alice");
  Alice.Walk(5);

  cout << "Alice is called " << Alice.GetName() << "." << endl;
  cout << "She has walked " << Alice.GetWalkedDistance() << " km." << endl;

  return 0;
}

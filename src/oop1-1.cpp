#include <iostream>
#include <string>

using namespace std;

class Person{
private:
  string name;
  unsigned int walked_distance;
public:
  string GetName(){
    return name;
  }
  unsigned int GetWalkedDistance(){
    return walked_distance;
  }
  void Walk(unsigned int distance){
    walked_distance += distance;
  }

  // Constructor
  Person(string cname){
    name = cname;
    walked_distance = 0;
  }
};

int main(){
  Person Alice("Alice");
  Person Bob("Bob");

  cout << "Alice is called " << Alice.GetName() << endl;
  cout << "Bob is called " << Bob.GetName() << endl;

  Alice.Walk(5);
  string first = "Alice";
  string second = "Bob";
  unsigned int diff = Alice.GetWalkedDistance() - Bob.GetWalkedDistance();
  if (Alice.GetWalkedDistance() < Bob.GetWalkedDistance()){
    first = "Bob";
    second = "Alice";
    diff *=-1;
  }
  cout << first << " walked " << diff << "km more than " << second << endl;
  return 0;
}

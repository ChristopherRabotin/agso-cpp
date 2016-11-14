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
  string GetName(){
    return name;
  }

  unsigned int GetWalkedDistance(){
    return walked_distance;
  }

  void Walk(unsigned int distance){
    walked_distance += distance;
  }

  Person(string cname){
    name = cname;
    walked_distance = 0;
  }
};

int main(){
  Person Alice("Alice");
  Alice.Walk(5);

  cout << "Alice is called " << Alice.GetName() << "." << endl;
  cout << "She has walked " << Alice.GetWalkedDistance() << " km." << endl;

  return 0;
}

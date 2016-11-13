#include <iostream>
#include <string>

using namespace std;

class Person{
private:
  string name;
  unsigned int walked_distance;
public:
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

  cout << "Alice is called " << Alice.name << "." << endl;
  cout << "She has walked " << Alice.walked_distance << " km." << endl;

  return 0;
}

#include <iostream>
#include <string>

using namespace std;

struct Person{
  string name;
  unsigned int walked_distance;
};

void Walk(Person *p, unsigned int distance){
  p->walked_distance += distance;
}

int main(){
  Person Alice;
  Alice.name = "Alice";
  Alice.walked_distance = 0;

  Person Bob;
  Bob.name = "Bob";
  Bob.walked_distance = 0;

  Walk(&Alice, 5);

  string first = "Alice";
  string second = "Bob";
  unsigned int diff = Alice.walked_distance - Bob.walked_distance;
  if (Alice.walked_distance < Bob.walked_distance){
    first = "Bob";
    second = "Alice";
    diff *=-1;
  }
  cout << first << " walked " << diff << "km more than " << second << endl;
  return 0;

}

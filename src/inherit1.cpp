#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class GreatApe {
private:
  string name;
public:
  string GetName(){
    return name;
  };
  virtual unsigned int NumOpposableDigits(){
    // This is a default value: GreatApes have at least two opposable digits.
    return 2;
  };
  GreatApe(string iname){
    name = iname;
  }
  ~GreatApe(){};
};

// Both Gorillas and "Persons" are great apes.
// But Gorillas have four opposable digits, not just two.
// So let's redefine (overwrite) the NumOpposableDigits function for gorillas.
// NOTE: Constructors *must* be redefined.

class Person : public GreatApe{
public:
  Person(string iname): GreatApe(iname){}
};
class Gorilla : public GreatApe{
public:
  unsigned int NumOpposableDigits(){
    return 4;
  }
  Gorilla(string iname): GreatApe(iname){}
};

int main(){
  Gorilla Ug("Ug-Ug-Ug");
  Gorilla Koko("Koko");
  Person Alice("Alice");
  cout << Alice.GetName() << " has " << Alice.NumOpposableDigits() << " opposable digits." << endl;
  cout << Koko.GetName() << " has " << Koko.NumOpposableDigits() << " opposable digits." << endl;
  cout << Ug.GetName() << " has " << Ug.NumOpposableDigits() << " opposable digits." << endl;
}

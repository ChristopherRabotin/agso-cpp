#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class GreatApe {
private:
  string name;
protected:
  // opposableDigits is a protected attribute, so it can *only* be called
  // by subclasses (i.e. classes which inherit from GreatApe).
  unsigned int opposableDigits;
public:
  string GetName(){
    return name;
  };
  unsigned int NumOpposableDigits(){
    return opposableDigits;
  };
  virtual string Species(){}; // Look at me!
  GreatApe(string iname){
    name = iname;
  }
  ~GreatApe(){};
};

class Person : public GreatApe{
public:
  string Species(){
    return "human";
  }
  Person(string iname): GreatApe(iname){
    opposableDigits = 2; // Person can alter a protected parent attribute.
  }
};
class Gorilla : public GreatApe{
public:
  string Species(){
    return "gorilla";
  }
  Gorilla(string iname): GreatApe(iname){
    opposableDigits = 4;
  }
};

int main(){
  Gorilla Ug("Ug-Ug-Ug");
  Gorilla Koko("Koko");
  Person Alice("Alice");

  /* g++ will complain if you try to modify opposableDigits here
  //Alice.opposableDigits = 1;
  inherit2.cpp: In function ‘int main()’:
  inherit2.cpp:52:9: error: ‘unsigned int GreatApe::opposableDigits’ is protected within this context
     Alice.opposableDigits = 1;
           ^~~~~~~~~~~~~~~
  inherit2.cpp:14:16: note: declared protected here
     unsigned int opposableDigits;
                  ^~~~~~~~~~~~~~~
  */
  cout << Alice.GetName() << " is a GreatApe of species " << Alice.Species() << " and has " << Alice.NumOpposableDigits() << " opposable digits." << endl;
  cout << Koko.GetName() << " is a GreatApe of species " << Koko.Species() << " and has " << Koko.NumOpposableDigits() << " opposable digits." << endl;
  cout << Ug.GetName() << " is a GreatApe of species " << Ug.Species() << " and has " << Ug.NumOpposableDigits() << " opposable digits." << endl;
}

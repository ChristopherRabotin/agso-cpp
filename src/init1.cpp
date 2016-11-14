#include "init1.hpp"

using std::cout;
using std::endl;

Person* initAliceOnHeap() {
  Person *Alice = new Person("AliceHeap");
  return Alice;
}

Person* initAliceOnStack(){
  Person Alice("AliceStack");
  return &Alice;
}

int main(){
  Person* AH = initAliceOnHeap();
  cout << "AH is called " << AH->GetName() << "." << endl;

  Person* AS = initAliceOnStack();
  cout << "AS is called " << AS->GetName() << "." << endl;

  return 0;
}

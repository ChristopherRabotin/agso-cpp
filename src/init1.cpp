#include "init1.hpp"

Person* initAliceOnHeap() {
  Person *Alice = new Person("AliceHeap");
  return Alice;
}

int main(){
  Person* AH = initAliceOnHeap();
  cout << "AH is called " << AH->GetName() << "." << endl;
  delete AH; // Avoids memory leaks.
  return 0;
}

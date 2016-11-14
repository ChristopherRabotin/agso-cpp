#include <iostream>
#include "advoop.hpp"

// Given x and y of class "Type", apply the "+" operator which
// *must* return something of class "Type".
template<class Type>
Type addition(Type x, Type y){
  return x + y;
}

int main(){
  int ii = 10, ij = 2;
  std::cout << addition(ii, ij) << std::endl;

  double ci = 10, cj = 2;
  std::cout << addition(ci, cj) << std::endl;

  Vector2D v1(1, 4), v2(2, 3);
  Vector2D v3 = addition(v1, v2);
  std::cout << "[" << v3.x << ", " << v3.y << "]"<< std::endl;

  return 0;
}

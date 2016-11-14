#include <iostream>
#include "advoop.hpp"

// Given x and y of class "Type", apply the "*" operator which
// *must* return something of class "Type".
template<class Type>
Type multiply(Type x, Type y){
  return x * y;
}

int main(){
  int ii = 10, ij = 2;
  std::cout << multiply(ii, ij) << std::endl;

  char ci = 10, cj = 2;
  std::cout << multiply(ci, cj) << std::endl;

  Vector2D v1(1, 4), v2(2, 3);
  std::cout << multiply(v1, v2) << std::endl;

  return 0
}

#include <iostream>
#include "advoop.hpp"

int main(){
  Vector2D v1(1, 4);
  Vector2D v2(2, 3);
  Vector2D v3 = v1 + v2;
  std::cout << "v1+v2 = [" << v3.x << ", " << v3.y << "]"<< std::endl;
  std::cout << "v1'*v2 = " << v1*v2 << std::endl;
  return 0;
}

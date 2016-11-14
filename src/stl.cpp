#include <vector>
#include <iostream>

using std::vector;

int main(){
  // Define all three vectors in 2x1.
  vector<double> v1(2), v2(2), v3(2);
  v1[0] = 1; v1[1] = 4;
  v2[0] = 2; v2[1] = 3;

  for(int i=0;i<2;i++)
    v3[i] = v1[i] + v2[i]; // Ultra laziness will shed hours of programming.

  std::cout << "[" << v3[0] << ", " << v3[1] << "]"<< std::endl;
  return 0;
}

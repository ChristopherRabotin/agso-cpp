#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const double epsilon = 1e-12;

class Vector3D{
private:
  double x, y, z;
public:
  bool Equals(Vector3D *v){
    return abs(x - v->x) < epsilon && abs(y - v->y) < epsilon && abs(z - v->z) < epsilon;
  }
  void PrettyPrint() {
    cout << "[" << x << ", " << y << ", " << z << "]" << endl;
  }
  Vector3D(double ix, double iy, double iz){
    x = ix;
    y = iy;
    z = iz;
  }
};

int main(){
  Vector3D V1(1, -5, 6.1);
  V1.PrettyPrint();
  Vector3D V2(0, -5, 6.1);
  V2.PrettyPrint();
  cout << "V1 == V2 ? " << V1.Equals(&V2) << endl;
  return 0;
}

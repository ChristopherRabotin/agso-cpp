#include "pb2.hpp"

bool Vector3D::Equals(Vector3D *v){
  return abs(x - v->x) < epsilon && abs(y - v->y) < epsilon && abs(z - v->z) < epsilon;
}
void Vector3D::PrettyPrint() {
  cout << "[" << x << ", " << y << ", " << z << "]" << endl;
}
Vector3D::Vector3D(double ix, double iy, double iz){
  x = ix;
  y = iy;
  z = iz;
}

Vector3D* initV1() {
  Vector3D* v1 = new Vector3D(-1, 5, 6.1);
  return v1;
}

int main(){
  Vector3D* v1 = initV1();
  Vector3D v2 = Vector3D(0, 5, 7);
  cout << "V2 == V1? " << v2.Equals(v1) << endl;
  delete v1;
  return 0;
}

#include <vector>
#include <iostream>
using std::vector;

class Vector3D{
private:
  vector<double> v;
public:
  double x(){
    return v[0];
  }
  double y(){
    return v[1];
  }
  double z(){
    return v[2];
  }
  bool operator==(Vector3D v2){
    return x() == v2.x() && y() == v2.y() && z() == v2.z();
  }
  void PrettyPrint(){
    std::cout << "[" << x() << "," << y() << "," << z() << "]" << std::endl;
  }
  Vector3D(double ix, double iy, double iz){
    v = vector<double>(3);
    v[0] = ix;
    v[1] = iy;
    v[1] = iz;
  }
  ~Vector3D(){}; // Define the destructor as a NO-OP.
};

int main(){
  Vector3D v1(0, 5, 7);
  Vector3D v2(1, 3, 0);
  std::cout << "v1 == v2? " << (v1 == v2) << std::endl;
  std::cout << "v2 == v2? " << (v2 == v2) << std::endl;
  return 0;
}

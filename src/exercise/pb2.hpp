#ifndef _PB2_H
#define _PB2_H

#include <iostream>
using std::cout;
using std::endl;

const double epsilon = 1e-12;

class Vector3D {
private:
  double x, y, z;
public:
  bool Equals(Vector3D *v);
  void PrettyPrint();
  Vector3D(double ix, double iy, double iz);
  ~Vector3D(){}; // Define the destructor as a NO-OP.
};

#endif

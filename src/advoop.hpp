#ifndef _ADVOOP_H
#define _ADVOOP_H

class Vector2D{
public:
  double x, y;
  Vector2D operator+(const Vector2D v){
    // Make sure to allocate on the heap!
    return *(new Vector2D(x+v.x, y+v.y));
  }
  double operator*(const Vector2D v){
    // Let's implement this as the dot product.
    return x*v.x + y*v.y;
  }
  Vector2D(double ix, double iy){
    x = ix;
    y = iy;
  }
};

#endif

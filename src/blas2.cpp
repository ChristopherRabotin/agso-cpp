#include <iostream>


extern "C" {
// Ref: http://www.netlib.org/lapack/explore-html/d7/d15/group__double__blas__level2_ga6ab49c8fa5e2608d9545483045bf3d03.html#ga6ab49c8fa5e2608d9545483045bf3d03
double dsymv_( const char *UPLO, const int *N, const double *ALPHA, const double *A, \
  const int *LDA, const double *X, const int *INCX, const double *BETA,\
  const double *Y, const int *INCY);
}

double mult2d(double *a, double *x, double *y){
  // There may be a better way to do this TBH.
  int one = 1, two = 2;
  double oned = 1, zero = 0;
  char u = 'u';
  return dsymv_(&u, &two, &oned, a, &two, x, &one, &zero, y, &one);
};

int main(){
  double a[4] = {1, 2, 2, 4};
  double x[2] = {5, 6};
  double *y = new double[2]; // The result goes here.
  mult2d(a,x,y);
  std::cout << "[" << y[0] << "," << y[1] << "]" << std::endl;

  return 0;
};

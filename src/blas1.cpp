// Mostly from https://ubuntuforums.org/showthread.php?t=1740797&s=b7bfb09d4475fb810160a0a0f3005ee4&p=11476604#post11476604
#include <iostream>

// C++ calls functions in a different way, so you need to change specify that this is a C/FORTRAN function call

extern "C" {
// FORTRAN adds _ after all the function names and all variables are called by reference
double ddot_( const int *N, const double *a, const int *inca, const double *b, const int *incb );
double dnrm2_( const int *N, const double *x, const int *incx);
}

double ddot( int N, double *a, int inca, double *b, int incb ){
  return ddot_( &N, a, &inca, b, &incb );
};

double dnorm2(int N, double *a, int incx){
  return dnrm2_( &N, a, &incx );
};

int main(){
  // you can define the arrays in one of two ways on the heap
  double *a = new double[3];
  a[0] = 1.0; a[1] = 2.0; a[2] = 3.0;
  // on the stack
  double b[3] = { 4.0, 5.0, 6.0 };

  cout <<" The dot product is: " <<  ddot( 3, a, 1, b, 1 ) << endl;
  cout <<" The norm is:" << dnorm2(3, a, 1) << endl;

  return 0;
};

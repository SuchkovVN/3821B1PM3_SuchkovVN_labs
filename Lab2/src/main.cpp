#include "TComplex.h"
#include <iostream>


int main() {
  TComplex a(3.0, 4.0);
  TComplex b(1.5, 3.0);
  TComplex c, d;
  cout << a << " " << b << " " << c << "\n";

  a.PrintTrig();
  d = a.RationalPow(3, 1);
  cout << d << "\n";

  c = a + b; 
  cout << c << "\n";
  c = a * b;
  cout << c << "\n";
  c = a / b; 
  cout << c << "\n";

  c = 0.0;
  c = c + 10;
  c = c * 2;
  cout << c << "\n";
  c = a + b; 
  cout << "Abs: " <<c.CAbs() << " Argument:  " << c.Arg() << "\n";
  c.PrintTrig(); 

  c = 0.0;

  cin >> c; 
  cout << c << "\n";
  c = c.RationalPow(1, 2);
  cout << c << "\n";

  return 0;
}
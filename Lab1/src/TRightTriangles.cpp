#include "TRightTriangles.h"
#include <math.h>

TRightTriangles::TRightTriangles() {
  n = 3;
  sideLength[0] = 0.0;
  sideLength[1] = 0.0;
  sideLength[2] = 0.0;
  p = sideLength;
}

void TRightTriangles::SetRightTriangle(double _firstSide, double _secondSide) {
  if((_firstSide + _secondSide) < (abs(_firstSide) + abs(_secondSide))) {
    std::cout << "Init Error" << "\n";
    return;
  }
  double temp;
  temp = _firstSide*_firstSide + _secondSide*_secondSide;
  temp = sqrt(temp);
  
  sideLength[0] = _firstSide;
  sideLength[1] = _secondSide;
  sideLength[2] = temp;
}

TRightTriangles::TRightTriangles(double _firstSide, double _secondSide) {
  n = 3;
  SetRightTriangle(_firstSide, _secondSide);
}

#include "TRegTriangle.h"

TRegTriangle::TRegTriangle() {
  n = 3;
  sideLength[0] = 0.0;
  sideLength[1] = 0.0;
  sideLength[2] = 0.0;
  p = sideLength;
}

void TRegTriangle::SetRegTriangle(double _sidel) {
  sideLength[0] = _sidel;
  sideLength[1] = _sidel;
  sideLength[2] = _sidel;
}

TRegTriangle::TRegTriangle(double _sidel) {
  n = 3;
  SetRegTriangle(_sidel);
  p = sideLength;
}


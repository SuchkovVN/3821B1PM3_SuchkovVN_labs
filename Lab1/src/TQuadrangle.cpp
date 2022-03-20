#include "TPolygons.h"
#include "TQuadrangle.h"

TQuadrangles::TQuadrangles() {
  n = 4;
  sideLenght[0] = 0.0;
  sideLenght[1] = 0.0;
  sideLenght[2] = 0.0;
  sideLenght[3] = 0.0;
  p = sideLenght;
}


void TQuadrangles::SetQuadrangle(double _side1, double _side2, double _side3, double _side4) {
  sideLenght[0] = _side1;
  sideLenght[1] = _side2;
  sideLenght[2] = _side3;
  sideLenght[3] = _side4;
}

TQuadrangles::TQuadrangles(double _side1, double _side2, double _side3, double _side4) {
  n = 4;
  SetQuadrangle(_side1, _side2, _side3, _side4);
  p = sideLenght;
}
#include "TTriangles.h" 

TTriangles::TTriangles() {
  n = 3;
  for(int i = 0; i < 3; i++) sideLength[i] = 0;
  p = sideLength;
}
void TTriangles::SetTriangle(double _aside, double _bside, double _cside) {
  if((_aside + _bside > _cside) && (_aside + _cside > _bside) && (_bside + _cside > _aside)) {
    sideLength[0] = _aside;
    sideLength[1] = _bside;
    sideLength[2] = _cside; 
    return;
  }
  std::cout << "Init Error: triangle does not exist" << "\n";
}

TTriangles::TTriangles(double _aside, double _bside, double _cside) {
  n = 3;
  SetTriangle( _aside, _bside, _cside);
  p = sideLength; 
}
#include "TPolygons.h"

TPolygons::TPolygons() {
  n = 0;
  p = 0;
}

TPolygons::TPolygons(uint16_t _quantity, double *_sides) {
  n = _quantity;
  p = _sides;
}

TPolygons::~TPolygons() {
  delete [] p;
}

void TPolygons::SetPolygon(uint16_t _quantity, double *_sides) {
  n = _quantity;
  p = _sides;
}

int TPolygons::GetPolygonQ() {
  return n;
}

double TPolygons::GetPolygonSide(uint16_t _sideNumber) {

  if((_sideNumber > 0) && (_sideNumber <= n)){
    return p[_sideNumber];
  } 
  return 0;
  
}

void TPolygons::Display() {
  std::cout << "Vertex quantity: " << n << "\n";
  std::cout << "Polygon sides: ";
  for(int i = 0; i < n; i++) 
    std::cout << p[i] << ", ";
  std::cout << "\n";
}





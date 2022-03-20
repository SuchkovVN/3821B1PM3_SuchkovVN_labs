#include "TRegulars.h"

TRegulars::TRegulars() {
  n = 0; 
  p = 0;
}

void TRegulars::SetRegular(uint16_t _quantity, double _sidel) {
  n = _quantity;
  p = new double[n];
  for(int i = 0; i < n; i++) p[i] = _sidel;
}

TRegulars::TRegulars(uint16_t _quantity, double _sidel) {
  SetRegular(_quantity, _sidel);
}
#pragma once
#include "TPolygons.h"

class TRegulars : public TPolygons {
protected:
  double side; //длинна сторон(одинаковая) 
public: 
  TRegulars();
  TRegulars(uint16_t _quantity, double _sidel);
  void SetRegular(uint16_t _quantity, double _sidel);
};
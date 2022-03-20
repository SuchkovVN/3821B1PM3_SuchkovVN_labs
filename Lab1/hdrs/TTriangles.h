#pragma once
#include "TPolygons.h"

class TTriangles : public TPolygons {
protected: 
 double sideLength[3];
public: 
  TTriangles();
  TTriangles(double _aside, double _bside, double _cside);
  void SetTriangle(double _aside, double _bside, double _cside);
};
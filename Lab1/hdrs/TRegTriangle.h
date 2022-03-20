#pragma once
#include "TPolygons.h"
#include "TTriangles.h"

class TRegTriangle : public TTriangles {
protected:
  double side;
public: 
  TRegTriangle();
  TRegTriangle(double _sidel);
  void SetRegTriangle(double _sidel);
};
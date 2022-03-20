#pragma once
#include "TPolygons.h"
#include "TTriangles.h"

class TRightTriangles : public TTriangles { //прямоугольный
public: 
  TRightTriangles();
  TRightTriangles(double _firstSide, double _secondSide);
  void SetRightTriangle(double _firstSide, double _secondSide);

};
#pragma once
#include "TPolygons.h"

class TQuadrangles : public TPolygons {
protected:
  double sideLenght[4];
public: 
  TQuadrangles();
  TQuadrangles(double _side1, double _side2, double _side3, double _side4);
  void SetQuadrangle(double _side1, double _side2, double _side3, double _side4);
  
};
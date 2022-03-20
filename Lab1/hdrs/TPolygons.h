#pragma once 
#include <iostream>

class TPolygons{
protected:
  uint16_t n; // кол-во вершин 
  double *p; //длины сторон по порядку
public: 
  TPolygons();
  TPolygons(uint16_t _quantity, double *_sides);
  ~TPolygons();
  void SetPolygon(uint16_t _quantity, double *_sides);
  int GetPolygonQ();
  double GetPolygonSide(uint16_t _sideNumber);
  void Display();
};






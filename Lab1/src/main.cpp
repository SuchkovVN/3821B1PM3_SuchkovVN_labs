#include "TPolygons.h"
#include "TQuadrangle.h"
#include "TTriangles.h"
#include "TRegTriangle.h"
#include "TRightTriangles.h"
#include "TSquare.h"
#include "TRegulars.h"


int main() {
  TPolygons pol;
  pol.Display();
  TTriangles tr(3, 4 ,5);
  TRegTriangle treg(5);
  TRightTriangles tright(3, 4);
  tr.Display();
  treg.Display();
  tright.Display();
  TRegulars regular(6, 3);
  regular.Display();
  TQuadrangles quad(3, 3, 4, 4);
  TSquare sqr(5);
  quad.Display();
  sqr.Display();
  


  return 0;
}
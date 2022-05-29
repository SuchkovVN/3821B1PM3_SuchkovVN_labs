#include "Point.h"
#include "Polygon.h"

template <class T>
class TCube : GeomShape {
protected:
  TPoint<T> *vertices;
public:
  TCube();
  ~TCube();
  TCube(const int dim, const TPoint<T> *vertices);
  TCube(const TPolygon<T> square);

  void SetCube(const int dim, const TPoint<T> *vertices);
};
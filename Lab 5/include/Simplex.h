#include "Point.h"

template <class T>
class TSimplex : public GeomShape {
protected:
  TPoint<T> *vertices;
public:
  TSimplex();
  ~TSimplex();
  TSimplex(const int dim, const TPoint<T> *vertices);

  void SetSimplex(const int dim, const TPoint<T> *vertices);
  void SetVertex(const int indx);
};
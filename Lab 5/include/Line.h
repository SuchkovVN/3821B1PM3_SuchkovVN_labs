#include "Point.h"

template <class T>
class TLine : GeomShape {
protected:
  int vertexCount;
  TPoint<T> *vertices;
public:
  TLine();
  ~TLine();
  TLine(const int _vertexCount, TPoint<T> *_vertices);


  int GetVerticesCount() const;
  TPoint<T> GetVertex(const int indx) const;

  void SetLine(const int _vertexCount, TPoint<T> *_vertices);
  void SetVertex(const int indx, TPoint<T> vertex);
};

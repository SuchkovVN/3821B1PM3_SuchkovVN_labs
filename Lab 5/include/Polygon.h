#include "Line.h"


template <class T>
class TPolygon : public TLine<T>  {
public:
  TPolygon();
  ~TPolygon();
  TPolygon(const int _vertexCount, TPoint<T> *_vertices);
  TPolygon(const TLine<T>& line);

  void SetPolygon(const int _vertexCount, TPoint<T> *_vertices);
  



};
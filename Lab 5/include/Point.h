#include "GeomShape.h"

template <class T>
class TPoint : public GeomShape {
protected:
  T *comp;
public:
  TPoint();
  ~TPoint();
  TPoint(const int _dim);
  TPoint(const int _dim, const T *_comp);
  TPoint(const int _dim, const T x);

  T GetComponent(const int indx) const;

  void SetPoint(const int _dim, const T *_comp);
  void SetComponent(const int indx);
  
};

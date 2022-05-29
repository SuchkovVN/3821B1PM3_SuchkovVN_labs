#include "Point.h"

template <class T>
class TCircle {
protected:
  T radius; 
  TPoint<T> center;
public:
  TCircle();
  ~TCircle();
  TCircle(const TPoint<T>& _center, const T _radius);


  T GetRadius() const;
  TPoint<T> GetCenter() const;

  void SetRadius(const T _radius);
  void SetCircle(const TPoint<T>& _center, const T _radius);


};
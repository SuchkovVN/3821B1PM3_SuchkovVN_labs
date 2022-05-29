#include <iostream>


class GeomShape {
protected:
  bool isVisible;
  int dim;
public:
  int GetDim() const;
  bool GetVisionStatus() const;
  virtual void Show() = 0;
  virtual void Hide() = 0;
};


int GeomShape::GetDim() const {
  return dim;
}

bool GeomShape::GetVisionStatus() const {
  return isVisible;
}
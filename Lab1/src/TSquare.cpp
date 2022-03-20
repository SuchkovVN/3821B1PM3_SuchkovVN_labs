#include "TSquare.h"

void TSquare::SetSquare(double _side) {
  sideLenght[0] = _side;
  sideLenght[1] = _side;
  sideLenght[2] = _side;
  sideLenght[3] = _side;
}

TSquare::TSquare() {
  n = 4;
  SetSquare(0.0);
}

TSquare::TSquare(double _side) {
  SetSquare(_side);
}


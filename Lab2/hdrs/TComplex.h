#pragma once

class TComplex {
private:
  double Re;
  double Im;
public:
  TComplex();
  TComplex(double _Re, double _Im);
  TComplex(TComplex &_obj);
  void Print();
  void SetCompelx(double _Re, double _Im);
  double GetComplexRe();
  double GetComplexIm();

  //сеттеры и геттеры, конструктор копирования и перегружения + допы


};
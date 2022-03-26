#pragma once
#include <iostream>
using namespace std;

class TComplex {
private:
  double Re;
  double Im;
public:
  TComplex();
  TComplex(double _Re);
  TComplex(double _Re, double _Im);
  TComplex(const TComplex& obj);
  void SetComplexRe(double _Re);
  void SetComplexIm(double _Im);
  double GetComplexRe();
  double GetComplexIm();
  double CAbs(); //модуль комплксного числа 
  double Arg();
  void PrintTrig(); //вывод в триг форме
  TComplex RationalPow(int p, int q); // возведение в дробную степень с чеслителем p и знаменателем q 
  TComplex& operator=(const TComplex& p);

  friend TComplex operator+(const TComplex& p, const TComplex& q);
  friend TComplex operator-(const TComplex& p, const TComplex& q);
  friend TComplex operator*(const TComplex& p, const TComplex& q);
  friend TComplex operator/(const TComplex& p, const TComplex& q);
  friend TComplex operator+(const TComplex& p, double c);
  friend TComplex operator-(const TComplex& p, double c);
  friend TComplex operator*(const TComplex& p, double c);
  friend TComplex operator/(const TComplex& p, double c);
  friend bool operator==(const TComplex& p, const TComplex& q);
  friend ostream& operator<<(ostream& t, const TComplex& p); 
  friend istream& operator>>(istream& t, TComplex& p);
  
};
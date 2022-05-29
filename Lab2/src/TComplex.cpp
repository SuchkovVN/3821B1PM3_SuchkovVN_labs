#include <iostream>
#include "TComplex.h"
#include <math.h>

#define PI 3.1415926

using namespace std;

TComplex::TComplex() {
  Re = 0.0;
  Im = 0.0;
}
TComplex::TComplex(double _Re) {
  Re = _Re;
  Im = 0.0;
}
TComplex::TComplex(double _Re, double _Im) {
  Re = _Re;
  Im = _Im;
}

TComplex::TComplex(const TComplex& obj) {
  Re = obj.Re;
  Im = obj.Im;
}

void TComplex::SetComplexRe(double _Re) {
  Re = _Re;
}

void TComplex::SetComplexIm(double _Im) {
  Im = _Im;
}

double TComplex::GetComplexRe() {
  return Re;
}

double TComplex::GetComplexIm() {
  return Im;
}

bool operator==(const TComplex& p, const TComplex& q) {
  if((q.Re == p.Re) && (q.Im == p.Im)) {
    return 1; 
  }
  else return 0;
}

TComplex& TComplex::operator=(const TComplex& p) {
  if(p == *this) 
    throw "Self-Copy";
  Re = p.Re;
  Im = p.Im;
  return *this;
}

TComplex operator+(const TComplex& p, const TComplex& q) {
  TComplex temp;
  temp.SetComplexRe(p.Re + q.Re);
  temp.SetComplexIm(p.Im + q.Im);
  return temp;
}

TComplex operator-(const TComplex& p, const TComplex& q) {
  TComplex temp;
  temp.SetComplexRe(p.Re - q.Re);
  temp.SetComplexIm(p.Im - q.Im);
  return temp;
}

TComplex operator*(const TComplex& p, const TComplex& q) {
  TComplex temp;
  temp.SetComplexRe((p.Re)*(q.Re) - (p.Im)*(q.Im));
  temp.SetComplexIm((p.Re)*(q.Im) + (p.Im)*(q.Re));
  return temp;
}

TComplex operator/(const TComplex& p, const TComplex& q){
  TComplex temp;
  if(q == 0.0)
    throw "Error: divide by zero";
  double d = (q.Re)*(q.Re) + (q.Im)*(q.Im);
  temp.SetComplexRe(((p.Re)*(q.Re) + (p.Im)*(q.Im)) / d);
  temp.SetComplexIm(((p.Im)*(q.Re) - (p.Re)*(q.Im)) / d);
  return temp;
}

TComplex operator+(const TComplex& p, double c) {
  TComplex temp;
  temp.SetComplexRe(p.Re + c);
  return temp;
}

TComplex operator-(const TComplex& p, double c) { 
  TComplex temp;
  temp = p + (-c);
}

TComplex operator*(const TComplex& p, double c) {
  TComplex temp;
  temp.SetComplexRe((p.Re)*c);
  temp.SetComplexIm((p.Im)*c);
  return temp;
}

TComplex operator/(const TComplex& p, double c) {
  TComplex temp;
  if(c == 0.0)
    throw "Error: divide by zero";
  temp = p * (1 / c);
  return temp;
}

ostream& operator<<(ostream& t, const TComplex& p) {
  if(p.Re == 0) {
    if(p.Im == 0) 
      return ( t << 0.0);
    return (t << p.Im << "i");  
  }
  if(p.Im == 0)
    return (t << p.Re);
  if(p.Im > 0) 
    return (t << p.Re << " + " << p.Im << "i");
  if(p.Im < 0)
    return (t << p.Re << " - " << -p.Im << "i");
}

istream& operator>>(istream& t, TComplex& p) {
  double _Re, _Im;
  cout << "Enter Re: ";
  t >> _Re;
  cout << "\n";
  cout << "Enter Im: ";
  t >> _Im;
  cout << "\n";
  p.SetComplexRe(_Re);
  p.SetComplexIm(_Im);
  return t;

}

double TComplex::CAbs() { 
  if (*this == 0.0)
    return 0.0;
  return sqrt(Re*Re + Im*Im);
}

double TComplex::Arg() {
  if(Re == 0) {
    if(Im == 0)
      return 0.0;
    if(Im > 0)
      return PI/2;
    if(Im < 0)
      return -PI/2;
  }
  if(Im == 0) {
    if(Re > 0)
      return PI;
    if(Re < 0)
      return -PI;
  }
  return atan(Im/Re);
}

TComplex TComplex::RationalPow(const int p, const int q) {
  if(q == 0)  
    throw "Error: divide by zero";
  if(p == 0)
    return 1;
  if(p == q)
    return *this;

  double m, n; //m - числитель 

  if(q < 0) {
    n = -q;
    m = -p;
  }
  else{
    n = q;
    m = p;
  }

  TComplex temp;

  double arg = this->Arg();
  double r = this->CAbs();
  r = pow(r, m / n);
  temp.Re = r*(cos((m / n) * arg));
  temp.Im = r*(sin((m / n) * arg));

  return temp;
}

void TComplex::PrintTrig() {
  if(*this == 0.0)
    cout << 0.0 << "\n";
  double r = this->CAbs();
  double arg = this->Arg();
  cout << r << "*(" << "cos(" << arg << ")" << " + " << "i*" << "sin(" << arg << ")" << ")" << "\n";
}


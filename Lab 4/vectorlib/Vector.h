#pragma once 
#include <iostream>

using namespace std;

template <class T>
class TVector {
protected:
  int len;
  T *tuple;
public:
  TVector();
  TVector(const int _len);
  TVector(const int _len, const T *_tuple);
  TVector(const int _len, const T a);
  TVector(const TVector<T>& obj);
  ~TVector();

  int GetLen() const;
  T GetCoord(const int indx) const;
  void SetVector(const int _len, const T *_tuple);
  int ElementQuantity(const T a);
  void AllEntries(const T a, int*& p);
  void BubbleSort();
  void InsertSort();
  void QuickSort();

  TVector<T>& operator=(const TVector<T>& v);
  TVector<T> operator+(const TVector<T>& v);
  TVector<T> operator-(const TVector<T>& v);
  TVector<T> operator*(const T a);
  TVector<T> operator/(const TVector<T>& v);
  T operator*(const TVector<T>& v);
  bool operator==(const TVector<T>& v);
  T& operator[](const int indx);

  
  friend ostream& operator<<(ostream& t, const TVector<T>& v) {
    if(v.GetLen() == 0) {
      t << 0 << endl;
      return t;
    }
    for(int i = 0; i < v.GetLen() - 1; i++) {
      t << v.GetCoord(i) << ", ";
    }

    t << v.GetCoord(v.GetLen() - 1) << endl;
    return t;
  }


  friend istream& operator>>(istream& t, TVector<T>& v) {
    if(v.GetLen() == 0)
      throw "Error: 0-lenght vector >>";
    for(int i = 0; i < v.GetLen(); i++) {
      cout << "Enter vector " << i << " coordinate" << endl;
      t >> v[i];
    }
    return t; 
  }

};

//##################### Конструкторы #######################
template <class T>
TVector<T>::TVector() {
  len = 0;
  tuple = 0;
}

template <class T>
TVector<T>::~TVector() {
  if(tuple != 0) {
    delete [] tuple;
    tuple = 0;
  }
}

template <class T>
TVector<T>::TVector(const int _len) {
  len = _len;
  tuple = new T[len];
  for(int i = 0; i < len ; i++) {
    tuple[i] = 0;
  }
}

template <class T>
TVector<T>::TVector(const int _len, const T a) {
  if(len == 0) {
    TVector();
    return;
  }

  len = _len;
  tuple = new T[len];
  for(int i = 0; i < len; i++) {
      tuple[i] = a;
  }
}

template <class T>
TVector<T>::TVector(const int _len, const T* _tuple) {
  if((_len == 0) || (_tuple == 0)) {
    TVector();
    return;
  }

  len = _len;
  tuple = new T[len];

  for(int i = 0; i < len; i++) {
    tuple[i] = _tuple[i];
  }
}

template <class T>
TVector<T>::TVector(const TVector<T>& obj) {
  if(obj.len == 0) {
    TVector();
    return;
  }

  len = obj.len;
  tuple = new T[len];

  for(int i = 0; i < len; i++) {
    tuple[i] = obj.GetCoord(i);
  }
}

//####################### Методы ########################

template <class T>
int TVector<T>::GetLen() const {
  return len;
}

template <class T>
T TVector<T>::GetCoord(const int indx) const {
  if(indx < 0 || indx >= len)
    throw "Error: out of tuple range";
  return tuple[indx];
}

template <class T>
void TVector<T>::SetVector(const int _len, const T *_tuple) {
  if( _len == 0) {
    len = _len;
    if(tuple != 0) {
    delete [] tuple;
    tuple = 0;
    }
    return;
  }
    
  len = _len;
  if(tuple != 0) {
    delete [] tuple;
    tuple = 0;
  }

  tuple = new T[len];
  for(int i = 0; i < len; i ++) {
    tuple[i] = _tuple[i];
  }
}

//околодопы
template <class T>
int TVector<T>::ElementQuantity(const T a) {
  if(len == 0) 
    return 0;
  
  int result = 0;
  for(int i = 0; i < len; i++){
    if(tuple[i] == a)
      result++;
  }

  return result;
}

template <class T>
void TVector<T>::AllEntries(const T a, int*& p) {
  int quan = this->ElementQuantity(a);
  if(quan = 0) {
    p = 0;
    return;
  }

  p = new int[quan];
  int count = 0;
  for(int i = 0; i < len; i++) {
    if(tuple[i] == a) {
      p[count] = i;
      count++;
    }
  }
  return;
}

template <class T>
void TVector<T>::BubbleSort() {
  T temp;

  for(int i = 0; i < len; i++) {
    for(int j = len - 1; j > i; j--) {
      if(tuple[j-1] > tuple[j]) {
        temp = tuple[j-1];
        tuple[j-1] = tuple[j];
        tuple[j] = temp;
      }
    }
  }
}

template <class T>
void TVector<T>::InsertSort() {
  T temp;

  for(int i = 1; i < len; i++) {
    for(int j = i-1; j >= 0 && tuple[j] > tuple[j+1]; j--) {
      temp = tuple[j+1];
      tuple[j+1] = tuple[j];
      tuple[j] = temp;
    }
  }
}

template <class T>
void Quick(T *a, int N) {
  int i = 0, j = N-1;
  T temp, p;

  p = a[N>>1];

  while(i < j) {
    while(a[i] < p) i++;
    while(a[j] > p) j--;

    if(i < j) {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      i++;
      j--;
    }
  }
  if(j > 1) Quick(a, j);
  if(N > i+1) Quick(a+i, N-i);

}

template <class T>
void TVector<T>::QuickSort() {
  Quick(tuple, len);
  return;
}


//######################### Операторы #########################
template <class T>
T& TVector<T>::operator[](const int indx) {
  if((indx < 0) || (indx >= len)) {
    throw "Error: out of tuple range";
  }
  return tuple[indx];
}


template <class T>
TVector<T>& TVector<T>::operator=(const TVector<T>& v) {
  if(v.len == 0) {
    throw "Error: vector=null error";
  }

  len = v.len;
  if(tuple != 0) {
    delete [] tuple;
    tuple = 0;
  }

  tuple = new T[len];
  for(int i = 0; i < len; i++) {
    tuple[i] = v.tuple[i];
  }

  return *this;
}

template <class T>
bool TVector<T>::operator==(const TVector<T>& v) {
  if(len != v.len)
    return false;
  for(int i = 0; i < len; i++) {
    if(tuple[i] != v.tuple[i])
      return false;
  }
  return true;
}

template <class T>
TVector<T> TVector<T>::operator+(const TVector<T>& v) {
  if(len != v.GetLen())
    throw "Error: vector+vector(len1 != len2) error";
  TVector<T> temp(len);
  for(int i = 0; i < len; i++) {
    temp[i] = (*this)[i] + v.GetCoord(i);
  }
  return temp;
}

template <class T>
TVector<T> TVector<T>::operator*(const T a) {
  if(len == 0)
    return *this;
  TVector<T> temp(len);
  for(int i = 0; i < len; i++) {
    temp[i] = a*tuple[i];
  }
  return temp;
}

template<class T>
T TVector<T>::operator*(const TVector<T>& v) {
  if(len != v.GetLen())
    throw "Error: multiplying diffetent-lenght vectors";
  if(len == 0)
    throw "Error: multiplying 0 lenght vectors";

  T result = 0;

  for(int i = 0; i < len; i++) {
    result += (*this)[i]*v.GetCoord(i);
  }
  return result;
}

template <class T>
TVector<T> TVector<T>::operator/(const TVector<T>& v) {
  if(len != v.GetLen())
    throw "Error: multiplying diffetent-lenght vectors";
  if(len == 0)
    throw "Error: multiplying 0 lenght vectors";

  TVector<T> temp(len);
  for(int i = 0; i < len; i++) {
    if(v.GetCoord != 0) 
      temp[i] = tuple[i] / v.GetCoord(i); 
    else temp[i] = 0;
  }
  return temp;

}

template <class T>
TVector<T> TVector<T>::operator-(const TVector<T>& v) {
  return ((*this) + v*(-1));
}


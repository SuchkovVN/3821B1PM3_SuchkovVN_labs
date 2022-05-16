#include "Vector.h"
#include "Matrix.h"
#include <iostream>

using namespace std;

int main() {
  try{ 
    int t1[2] = {1, -1};
    TVector<int> a(2, 3);
    TVector<int> b(2, t1);
    TVector<int> c = a + b;
    TMatrix<int> A(2, 2, 1);
    TMatrix<int> B(2, 2, 1);
    TMatrix<int> C = A * a;
  
    int *t2;
    c.QuickSort();
    c.AllEntries(2, t2);
    cout << t2[0] << endl;
    cout << c << endl;
    cout << C << endl;
    cout << A * B << endl;
  }
  catch(const char *s) {
    cout << s << endl;
  }

}

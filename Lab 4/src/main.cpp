#include "Vector.h"
#include "Matrix.h"
#include <iostream>
#include <time.h>

using namespace std;

int main() {
  try {
    int n = 3000;
    for(n; n < 3100; n += 100) {
      TMatrix<int> A(n, n, 9999999);
      TMatrix<int> B(n, n, 9999999);
      TMatrix<int> C(n, n, 0);

      unsigned start = clock(), finish = 0;
      
      C = A+B;
      finish = clock() - start;

     
      cout << "Executed for " << finish << " ms"<< endl;
    }
  }
  catch(const char *s) {
    cout << s << endl;
  }
}







//   try{ 
//     int t1[2] = {1, -1};
//     TVector<int> a(2, 3);
//     TVector<int> b(2, t1);
//     TVector<int> c = a + b;
//     TMatrix<int> A(2, 2, 1);
//     TMatrix<int> B(2, 2, 1);
//     TMatrix<int> C = A * a;
  
//     int *t2;
//     c.QuickSort();
//     c.AllEntries(2, t2);
//     cout << t2[0] << endl;
//     cout << c << endl;
//     cout << C << endl;
//     cout << A * B << endl;
//   }
//   catch(const char *s) {
//     cout << s << endl;
//   }

// }

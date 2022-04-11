#include "String.h"

int main() {
try{
  TString test("abbcccddddeeeeffzzx");
  cout << test << "\n";
  TString test_2("c");
  //test_2 = test + test_2;
  cout << test_2 << "\n";
  TString test_3;
  //cin >> test_3;
  //cout << test_3;
  //cout << test_3;

  int sz = 0, sz_2 = 0;
  char *p, *q = 0;
  int *tb;
  test_2.Characters(p, sz);
  test.CharQuantity(q, tb, sz_2);
  cout << q << '\n';
  for(int i = 0; i < sz_2; i++)
    cout << tb[i];
  cout << '\n' << sz << "\n";
  cout << p << '\n';
  cout << StrLen(p);
  cout << '\n' << sz_2;  
  cout << '\n' << test.MostFreq();
}
  
catch(const char* s) {
  cout << s;
}

  return 0;
}
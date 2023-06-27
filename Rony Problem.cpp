#include <bits/stdc++.h>
using namespace std;
void solve () {
  string s;
  cin >> s;
  bool f = false;
  int sz = s.size(), i, j , k;
  for ( i = 0; i < (sz - 1);) {
    for ( j = i + 1; j < sz; j+=2) {
      int d = s[j] - s[i];
      if (d != 0 && d <= 2) {
        for (k = i+1; k < j - 2 ; k+=2) {
          int temp = s[k+1] - s[k];
          if (k != 0 && k <= 2) f = true;
          else {
           f = false;
           break;

          }
        }
      }
      else {
           f = false;
           break;

          }
    }
    i = j + 1;
  }
  if (f) cout << "True\n";
  else cout << "False\n";
}
int main () {
  solve();
}

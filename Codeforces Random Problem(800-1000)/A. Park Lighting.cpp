#include <bits/stdc++.h>
using namespace std;
void solve () {
  int a, b;
  cin >> a >> b;
  int d = (a*b)/2;
  if ((a*b) % 2 == 0) cout << d << endl;
  else cout << d + 1 << endl;
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

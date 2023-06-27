#include <bits/stdc++.h>
using namespace std;
void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a == 0 && b == 0 && c == 0 && d == 0) cout << "0\n";
  else if (a == 1 && b == 1 && c == 1 && d == 1) cout << "2\n";
  else  cout << "1\n";

}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

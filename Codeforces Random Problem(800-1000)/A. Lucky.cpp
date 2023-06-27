#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  int s1 = 0;
  int s2 = 0;
  int i = 3;
  while(i--) {
    int d = n % 10;
    n /= 10;
    s1 += d;
  }
  while(n > 0) {
    int d = n % 10;
    n /= 10;
    s2 += d;
  }
  if (s1 == s2) cout << "YES\n";
  else cout << "NO\n";
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

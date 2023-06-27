#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  int a[2*n];
  for (int i = 0; i < 2*n; i++) cin >> a[i];
  int c = 0;
  for (int i = 0; i < (2*n - 1); i++) {
    for (int j = i + 1; j < 2*n; j++) {
      if(a[j] > -1) {
        if ((a[i] + a[j]) % 2 == 1) {
          c++;
          a[i] = -1;
          a[j] = -1;
          break;
        }
      }
    }
  }
  if(c == n) cout << "YES\n";
  else cout << "NO\n";
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

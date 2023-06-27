#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  int a[n];
  bool f = true;
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a+n);
  for (int j = 0; j < n-1; j++) {
      if (abs(a[j] - a[j+1]) > 1) {
        f = false;
        break;
      }
    }
    //if (f == false) break;

  if (f) cout << "YES\n";
  else cout << "NO\n";
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

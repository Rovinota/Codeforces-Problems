#include <bits/stdc++.h>
using namespace std;
void solve () {
  int a[4];
  for (int i = 0; i < 4; i++) cin >> a[i];
  int c = a[0];
  int ans = 0;
  for (int i = 1; i < 4; i++) {
    if (a[i] > c) ans++;
  }
  cout << ans << endl;
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

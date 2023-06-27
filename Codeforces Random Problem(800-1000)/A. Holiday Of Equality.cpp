#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  int mx = INT_MIN;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mx = max(mx, a[i]);
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int d = mx - a[i];
    ans += d;
  }
  cout << ans << endl;

}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}

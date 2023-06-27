#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n, k;
  cin >>  n >> k;
  int a[n];
  int b[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  sort(a, a+n);
  sort (b, b+n, greater <int> ());
  int sum = 0;
  for (int i = 0, j = 1; j <= k; i++, j++) {
    if (a[i] < b[i]) swap (a[i], b[i]);
    //sum += a[i];
  }
  for (int i = 0; i < n; i++) sum += a[i];
  cout << sum << endl;
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}


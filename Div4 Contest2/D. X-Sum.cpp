#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      long long sum = a[i][j];
      for (int c = i+1, d = j+1; (c < n && d < m); c++, d++) {
        sum += a[c][d];
      }
      for (int c = i-1, d = j-1; (c >= 0 && d >= 0); c--, d--) {
        sum += a[c][d];
      }
      for (int c = i-1, d = j+1; (c >= 0 && d < m); c--, d++) {
        sum += a[c][d];
      }
      for (int c = i+1, d = j-1; (c < n && d >= 0); c++, d--) {
        sum += a[c][d];
      }
      ans = max (ans, sum);

    }
  }
  cout << ans << endl;

}
int main () {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

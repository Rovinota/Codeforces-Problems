#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n, m;
    cin >> n >> m;
    long long ar[n][m];
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cin >> ar[i][j];
      }
    }

    long long ans = 0;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        long long s = ar[i][j];
        for(int a = i + 1, b = j + 1; a < n && b < m; a++, b++) {
          s += (ar[a][b]);
        }
        for(int a = i - 1, b = j - 1; a >= 0 && b >= 0; a--, b--) {
          s += ar[a][b];
        }
        for(int a = i - 1, b = j + 1; a >= 0 && b < m; a--, b++) {
          s += ar[a][b];
        }
        for(int a = i + 1, b = j - 1; a < n && b >= 0; a++, b--) {
          s += ar[a][b];
        }

        ans = max(ans, s);
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

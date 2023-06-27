#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, m; cin >> n >> m;
  int arr[m];
  int count [n+1] = {0};
  for (int i = 0; i < m; i++) {
    cin >> arr[i];
    count[arr[i]]++;
  }
  int ans = 0, p = 0;
  for (int i = 1; i <= n; i++) {
    if (count[i] == 0) {
      count [i] = 2;
      if (p != 0) {
        p--;
        ans = max(count[i],  p);
      }
      else {
        ans = max(ans, count[i]);
      }
    }
    else if (count[i] == m) {
      p = count[i]--;
      ans = max(ans, p);
    }
    else {
      ans = max(ans, count[i]);
    }
  }
  cout << ans << endl;
}
int main () {
  int t; cin >> t;
  while(t--) solve();
}

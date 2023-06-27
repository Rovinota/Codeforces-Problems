#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int a[27] = {0};
  for (int i = 0; i < n ; i++) {
    int d = s[i] - 64;
    a[d]++;
  }
  int ans = 0;
  for (int i = 1; i <= 26; i++) {
    if (a[i] == 1) ans += 2;
    else if (a[i]> 1) ans = ans + (a[i] - 1) + 2;
  }
  cout << ans << endl;
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}


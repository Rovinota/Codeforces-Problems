#include <bits/stdc++.h>
using namespace std;
void solve () {
  int a, b;
  cin >> a >> b;
  int ans1 = min(a, b);
  int ans2 = (max(a, b) - ans1) / 2;
  cout << ans1 << " " << ans2 << endl;
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}


#include <bits/stdc++.h>
using namespace std;
void solve () {
  int a, b;
  cin >> a >> b;
  if (a == b) cout << "0\n";
  else  {
    int d = abs(a - b);
    int ans = d / 10;
    if (d % 10 == 0) cout << ans << endl;
    else cout << ans+1 << endl;
  }
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}


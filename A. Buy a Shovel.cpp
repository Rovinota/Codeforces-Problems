#include <bits/stdc++.h>
using namespace std;
void solve () {
  int a, b, d;
  cin >> a >> b;
  int ans = 1;
  d = a;
  int c = d - b;
  while(1) {
      //cout << d << endl;
    if (d % 10 == 0 || c % 10 == 0) {
      break;
    }
    else  {
      ans++;
      d = a * ans;
      c = d - b;
    }
  }
  cout << ans << endl;
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}


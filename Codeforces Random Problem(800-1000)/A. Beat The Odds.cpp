#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  int a[n];
  int ev =0, odd = 0;
  for (int i = 0; i < n; i++ ) {
    cin >> a[i];
    if (a[i] % 2 == 0) ev++;
    else odd++;
  }
  int ans = min (ev, odd);
  cout << ans << endl;
}
int main () {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

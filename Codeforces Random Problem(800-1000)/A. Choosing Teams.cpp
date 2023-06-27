#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n, k;
  cin >> n >> k;
  int c = 0;
  for (int i = 1; i <= n; i++) {
    int num;
    cin >> num;
    if ((num + k) <= 5) c++;
  }

  int ans = c / 3;
  cout << ans << endl;
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}


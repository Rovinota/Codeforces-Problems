#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  int ans = 0;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  int mx = a[0];
  int mn = a[0];
  for (int i = 0; i<n; i++) {
    if (a[i] > mx) {
      ans++;
      mx = a[i];
    }
    if (a[i] < mn) {
      ans++;
      mn = a[i];
    }
  }
  cout << ans << endl;
}
int main () {
  ios_base::sync_with_stdio(0);
   solve();
}


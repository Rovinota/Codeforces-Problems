#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main () {
  int n;
  cin >> n;
  int a [n+1];
  int mx = INT_MIN;
  int mn = INT_MAX;
  int imax , imin;
  for (int i = 1; i <=n; i++) {
    cin >> a[i];
    if (a[i] > mx) {
      mx = a[i];
      imax = i;
    }
    if (a[i] <= mn) {
      mn = a[i];
      imin = i;
    }
  }
  // cout << mx << " " << mn << endl;
  // cout << i1 << " " << i2 << endl;
  int ans = (imax - 1) + (n - imin);
  if (imax > imin) ans = ans - 1;
  cout << ans << endl;
}

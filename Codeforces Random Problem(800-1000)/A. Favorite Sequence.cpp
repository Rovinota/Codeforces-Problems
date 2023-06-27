#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  int ans[n];
  int k = 0;
  for (int i = 0, j = n - 1; i < j; i++, j--) {
    ans [k++] = a[i];
    ans [k++] = a[j];
  }
  if (n % 2 == 1) {
    ans [k++] = a[n/2];
  }
  for (int i = 0; i < n; i++) cout << ans[i] << " ";
  cout << endl;
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

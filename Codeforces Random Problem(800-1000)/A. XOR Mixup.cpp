#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  int a [n];
  for (int i = 0; i < n; i++) cin >> a[i];
  int ans;
  for (int i = 0; i < n; i++) {
    int sum = ;
    for (int j = 0; j < n; j++) {
      if(i != j) {
        sum ^= a[j];
      }
    }
  if (sum == a[i]) {
    ans = a[i];
    break;
  }
  }
  cout << ans << endl;
}
int main  () {
  int t;
  cin >> t;
  while(t--) solve();
}

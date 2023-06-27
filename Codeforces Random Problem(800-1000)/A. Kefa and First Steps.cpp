#include <bits/stdc++.h>
using namespace std;
int main () {
  int n; cin >> n;
  int a[n+5]; for (int i = 0; i < n; i++) cin >> a[i];
  a[n] = 0;
  int ans = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
      if (a[i] <= a[i+1]) {
        cnt++;
      }
      else {
        ans = max(ans, cnt); // 2 2 1 3 4 1
        cnt = 0;
      }
  }
  cout << ans+1 << endl;
}


#include <bits/stdc++.h>
using namespace std;
void solve () {
  int x;
  cin >> x;
  int a[4];
  int temp;
  for (int i = 1; i <= 3; i++) {
    cin >> a[i];
    if ( a[i] == 0) {
      temp = i;
    }
  }
  if (a[x] == x || a[a[x]] == temp) {
    cout << "YES\n";
  }
  else cout << "NO\n";
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

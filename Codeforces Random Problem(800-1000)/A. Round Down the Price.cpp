#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  double d = log10(n);
  if(d == 0) cout << "0\n";
  else {
    int temp = d;
    int ans = n - pow(10, temp);
    cout << ans << endl;
  }
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

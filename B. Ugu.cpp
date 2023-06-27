#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve() {
  int n; cin >> n;
  string s; cin >> s;
  int ans = 0, f = 0;
  for (int i = 0; i < s.size()-1; i++) {
    if (s[i] != s[i+1]) {
      if (f == 0 && s[i] == '1') {
        f = 1;
        ans++;
      }
      else if (f == 1) {
        ans++;
      }
    }
  }
  cout << ans << endl;
}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}

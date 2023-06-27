#include <bits/stdc++.h>
using namespace std;
void solve () {
  string s;
  cin >> s;
  int d = s.size();
  if (d % 2 == 1) cout << "NO\n";
  else {
    int r = d / 2;
    bool f = true;
    for (int i = 0, j = r; s[j] != '\0'; i++, j++) {
      if (s[i] != s[j]) {
        f = false;
        break;
      }
    }
    if (f) cout << "YES\n";
    else cout << "NO\n";
  }
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

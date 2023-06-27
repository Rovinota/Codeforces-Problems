#include <bits/stdc++.h>
using namespace std;
void solve () {
  string s;
  cin >> s;
  int a = 0, b = 0, c = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == 'A') a++;
    else if (s[i] == 'B') b++;
    else c++;
  }
  if (a == b and c == 0) cout << "YES\n";
  else if (b == c and a == 0) cout << "YES\n";
  else if (a >0 and b > 0 and c > 0) {
      if (a < b) {
        b = b - a;
        if (b == c) cout << "YES\n";
        else cout << "NO\n";
      }
      else if (b > c) {
        b = b - c;
        if (b == a) cout << "YES\n";
        else cout << "NO\n";
      }
      //else if ((b+c) == a) cout << "YES\n";
      else cout << "NO\n";
  }
  else cout << "NO\n";
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

#include <bits/stdc++.h>
using namespace std;
void solve () {
  string s;
  cin >> s;
  //string s1 = "YES";
  int c = 0;
  if (s[0] == 'y' || s[0] == 'Y') {
    s[0] = 'Y';
    c++;
  }
  if (s[1] == 'e' || s[1] == 'E') {
    s[1] = 'E';
    c++;
  }
  if (s[2] == 's' || s[2] == 'S') {
    s[2] = 'S';
    c++;
  }
  cout << c << endl;
  if (c == 3) cout << "YES\n";
  else cout << "NO\n";
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}



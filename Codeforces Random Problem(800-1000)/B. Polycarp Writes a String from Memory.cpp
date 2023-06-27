#include<bits/stdc++.h>
using namespace std;
// Collected from Himel Roy Du

void solve() {
  string s;
  cin >> s;
  int ans = 0;
  char a = '1', b = '1', c = '1';
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == a || s[i] == b || s[i] == c) continue;
    else if (s[i] != a && a == '1') {
      ans++;
      a = s[i];
    }
    else if (s[i] != b && b == '1') b = s[i];
    else if (s[i] != c && c == '1') c = s[i];
    else {
      a = s[i];
      b = '1';
      c = '1';
      ans++;
    }
  }
  cout << ans << endl;

}

int main () {
  int t;
  cin >> t;
  while(t--) solve() ;
}

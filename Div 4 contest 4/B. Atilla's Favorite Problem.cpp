#include <bits/stdc++.h>
using namespace std;
int main () {
  int t; cin >> t;
  while(t--) {
    int x; cin >> x;
    string s; cin >> s;
    sort (s.begin(), s.end());
    char ch;
    ch = s[x-1];
    int ans = ch - 96;
    cout << ans << endl;

  }
}


#include <bits/stdc++.h>
using namespace std;
int main () {
  string s; cin >> s;
  int f = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') {
      int cnt = 0;
      for (int j = 0; j < s.size(); j++){
          if (s[i+j] == '1') cnt++;
          else break;
      }
      if (cnt >= 7) {
        f = 1;
        break;
      }
    }
    else {
      int cnt2 = 0;
      for (int j = 0; j < s.size(); j++){
          if (s[i+j] == '0') cnt2++;
          else break;
      }
      if (cnt2 >= 7) {
        f = 1;
        break;
      }
    }
  }
  if (f) cout << "YES\n";
  else cout << "NO\n";
}

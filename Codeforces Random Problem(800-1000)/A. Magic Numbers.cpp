#include <bits/stdc++.h>
using namespace std;
int main () {
  string s;
  cin >> s;
  bool f = true;
  if (s[0] == '4') {
    cout << "NO\n";
    return 0;
  }
  for (int i = 0; i < (s.size()); i++) {
    if (s[i] != '1' && s[i] != '4') {
      cout << "NO\n";
      return 0;
    }
  }
  s += '0';
  for (int i = 0; i < s.size()-2; i++) {
    if (s[i] == s[i+1] && s[i] == s[i+2]) {
        if (s[i] == '4') {
          cout << "NO\n";
          return 0;
        }
    }
  }
  cout << "YES\n";
}

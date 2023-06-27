#include <bits/stdc++.h>
using namespace std;
int main () {
  string s, t;
  cin >> s >> t;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] < 97) s[i] = s[i] + 32;
    if (t[i] < 97) t[i] = t[i] + 32;
  }
  if (s == t) cout << "0\n";
  else if (s < t) cout << "-1\n";
  else cout << "1\n";
}

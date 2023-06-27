#include <bits/stdc++.h>
using namespace std;
int main () {
  string s1, s2;
  cin >> s1 >> s2;
  int ans = 0;
  bool f = true;
  for (int i = 0; i < s2.size(); i++) {
    for (int j = ans; j < s1.size();) {
      if (s2[i] == s1[j]) {
        ans++;
        break;
      }
      else {
        i = i - 1;
        j++;
        if (j == s1.size() - 1) f = false;
        break;
      }
    }
    if ( f == false) break;
  }
  cout << ans+1 << endl;
}

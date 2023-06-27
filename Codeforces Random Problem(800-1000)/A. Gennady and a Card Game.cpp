#include <bits/stdc++.h>
using namespace std;
int main () {
  string s;
  cin >> s;
  string s1, s2, s3, s4, s5;
  cin >> s1 >> s2 >> s3 >> s4 >> s5;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if (s[i] == s1 [j] || s[i] == s2[j] || s[i] == s3[j] || s[i] == s4[j] || s[i] ==s5[j]) {
      cout << "YES\n";
      return 0;
    }

    }

  }
  cout << "NO\n";
}

#include <bits/stdc++.h>
using namespace std;
int main () {
  string s;
  cin >> s;
  int up = 0,  lw = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >=65 && s[i] <= 90) up++;
    else lw++;
  }
  if (up > lw) {
    for (int i = 0; i < s.size(); i++) {
      if (s[i] >= 97) s[i] = s[i] - 32;
    }
  }
  else {
     for (int i = 0; i < s.size(); i++) {
      if (s[i] >= 65 && s[i] <= 90) s[i] = s[i] + 32;
    }
  }
  cout << s << endl;
}

#include <bits/stdc++.h>
using namespace std;
int main () {
  string s;
  cin >> s;
  int count = 0;
  for (char i = 'a'; i <= 'z'; i++) {
    for (int j = 0; j < s.size(); j++) {
      if (i == s[j]) {
        count++;
        break;
      }
    }
  }
  if (count % 2 == 0) cout << "CHAT WITH HER!\n";
  else cout << "IGNORE HIM!\n";
}

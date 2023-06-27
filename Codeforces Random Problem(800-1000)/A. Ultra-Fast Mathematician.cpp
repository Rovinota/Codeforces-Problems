#include <bits/stdc++.h>
using namespace std;
int main () {
  string s1, s2;
  cin >> s1 >> s2;
  int d = s1.size();
  char s [d+1];
  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] == s2[i]) s[i] = '0';
    else s[i] = '1';
  }
  for(int i = 0; i < d; i++) cout << s[i];
}

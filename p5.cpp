#include <bits/stdc++.h>
using namespace std;
int main () {
  string s1, s2;
  cin >> s1 >> s2;
  int d1 = s1.size();
  int d2 = s2.size();
  string s (d1+d2, 'a');

  for (int i = 0, j = 0; i < s1.size(); i++, j+=2) {
    s[j] = s1[i];
  }
  for (int i = 0, j = 1; i < s2.size(); i++, j+=2) {
    s[j] = s2[i];
  }
  //s[(s1.size() + s2.size())] = '\0';
  cout << s << endl;
}

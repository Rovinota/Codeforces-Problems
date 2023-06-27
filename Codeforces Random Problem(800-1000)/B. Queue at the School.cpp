#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  for (int i = 1; i <= k; i++) {
    for (int j = 0; j < (s.size() - 1); j++) {
      if (s[j] == 'B' && s[j+1] == 'G') {
        swap (s[j], s[j+1]);
        j = j + 1;
      }
    }
  }
  cout << s;
}

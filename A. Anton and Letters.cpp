#include <bits/stdc++.h>
using namespace std;
int main () {
  char s[1001];
  gets(s);
  int a[30] = {0};
  for (int i = 1; s[i] != '\0'; i++) {
    if (s[i] >= 97 && s[i] <= 122 ) {
      int d = s[i] - 96;
     // cout << d << " ";
      a[d]++;
    }
  }
  // cout << endl;
  int ans = 0;
  for (int i = 0; i <= 27; i++) {
    if (a[i] >= 1) ans++;
  }
  cout << ans << endl;
}

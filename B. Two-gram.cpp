#include <bits/stdc++.h>
using namespace std;
int main () {
  int n; cin >> n ;
  string s; cin >> s;
  int ans = 0;
  char ans1 , ans2;
  for (int i = 0; i < n-1; i++) {
    char c1 = s[i], c2 = s[i+1];
    int cnt = 0;
    for (int j = i; j < n-1; j++) {
      if (s[j] == c1 && s[j+1] == c2) cnt++;
    }
    //ans = max(ans, cnt); // ABACABA
    if (ans <= cnt) {
      ans1 = c1;
      ans2 = c2;
      ans = cnt;
    }

  }
  cout << ans1 << ans2 << endl;
}

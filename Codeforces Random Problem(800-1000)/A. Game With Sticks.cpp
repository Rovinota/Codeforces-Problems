#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, m; cin >> n >> m;
  string ans = "Malvika";
  while(n > 0 && m > 0) {
    ans = "Akshat";
    n--;
    m--;
    if (n > 0 && m > 0) {
      ans = "Malvika";
      n--;
      m--;
    }
  }
  cout << ans << endl;
}

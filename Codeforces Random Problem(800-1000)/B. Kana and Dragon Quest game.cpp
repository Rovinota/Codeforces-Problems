#include <bits/stdc++.h>
using namespace std;
int main () {
  int t; cin >> t;
  while(t--) {
    int x, n, m;
    cin >> x >> n >> m;
    while(n--) {
      if (x <= 20) break;
      x = x/2 + 10;

    }
    while(m--) {
      if (x <= 0) break;
      x -= 10;

    }
    if(x <= 0) cout << "Yes\n";
    else cout << "No\n";
  }
}

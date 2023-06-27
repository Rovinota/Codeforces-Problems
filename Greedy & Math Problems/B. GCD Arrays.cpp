#include <bits/stdc++.h>
using namespace std;
int main () {
  int t;
  cin >> t;
  while (t--) {
    int l, r, k;
    cin >> l >> r >> k;
    if (k == 0 && l == r) {
      if (l == 1)  cout << "No\n";
      else cout << "Yes\n";
    }
    else {
      int op = (r - l + 1) / 2;
      if (l % 2 == 1 && r % 2 == 1) {
        if (op+1 <= k) cout << "Yes\n";
        else cout << "No\n";
      }
      else {
        if (op <= k) cout << "Yes\n";
        else cout << "No\n";
      }
    }

  }
}

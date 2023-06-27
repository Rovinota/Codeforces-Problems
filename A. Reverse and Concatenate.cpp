#include<bits/stdc++.h>
using namespace std;
int main () {
  int t, k, n;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    string s, p;
    cin >> s;
    p = s;
    reverse (p.begin(), p.end());
    if (k == 0) cout << "1\n";
    else {
      if (s == p) cout << "1\n";
      else cout << "2\n";
    }
  }

}

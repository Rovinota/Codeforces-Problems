#include <bits/stdc++.h>
using namespace std;
void s() {
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  vector <int> v;
  int t= 0;
  for (int i = 0; i < n; i++){
    int a = s[i] - 96;
    t += a;
    v.push_back(t);
  }
  while (q--) {
    int l, r;
    cin >> l >> r;
    if (l > 1) {
      int ans = v[r-1] - v [l - 2];
    cout << ans << endl;
    }
    else cout << v[r-1] << endl;
  }
}
int main () {
  s();
}

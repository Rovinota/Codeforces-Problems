#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n, k;
  cin >> n >> k;
  vector <pair <int, int> > v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
    v[i].second *= -1;
  }
  sort(v.rbegin(), v.rend());
  int ans = 0;
  //for (int i = 0; i < n; i++) cout << v[i].first << " " << v[i].second << endl;
  for (int i = 0; i <  n; i++) {
    if (v[i] == v[k-1]) ans++;
  }
  cout << ans << endl;
}
int main () {
  ios_base::sync_with_stdio(0);
  solve();
}


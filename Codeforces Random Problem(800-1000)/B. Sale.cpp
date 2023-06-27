#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, m;
  cin >> n >> m;
  vector <int> v;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    v.push_back(num);
  }
  sort(v.begin(), v.end());
  int ans = 0;
  for (int i = 0; i < m; i++) {
    if (v[i] < 0) ans += v[i];
  }
  ans = -(ans);
  cout << ans << endl;
}

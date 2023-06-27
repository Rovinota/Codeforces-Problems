#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  vector < pair <int, int> > v;
  for (int i = 1; i <= n; i++) {
    int a, b;
    cin >> a >> b;
    v.push_back({a, b});
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for (int j = 0; j < n; j++) {
      if (v[i].first > v[j].first && v[i].second == v[j].second) c1++;
      if (v[i].first < v[j].first && v[i].second == v[j].second) c2++;
      if (v[i].first == v[j].first && v[i].second > v[j].second) c3++;
      if (v[i].first == v[j].first && v[i].second < v[j].second) c4++;
    }
    if (c1 >= 1 && c2 >= 1 && c3 >= 1 && c4 >= 1 ) ans++;
  }
  cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, m;
  cin >> n >> m;
  vector < pair <int, int> > v;
  for (int i = 1; i <= n; i++) {
    int num;
    cin >> num;
    v.push_back({i, num});
  }
  for (int i = 0; i < v.size() ; i++) {
    int req = v[i].second - m;
    if (req > 0) {
      v.push_back({v[i].first, req});
    }
  }
  cout << v[v.size() - 1].first << endl;
}

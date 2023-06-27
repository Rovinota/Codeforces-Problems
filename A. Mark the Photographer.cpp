#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n, x;
  cin >> n >> x;
  vector <int> v;
  for (int i = 1; i <= 2 * n; i++) {
    int num;
    cin >> num;
    v.push_back(num);
  }
  sort(v.rbegin(), v.rend());
  for (int i = 0; i < 2 * n; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

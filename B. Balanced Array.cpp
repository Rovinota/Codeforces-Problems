#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  int d = n / 2;
  if (d % 2 == 1) cout << "NO\n";
  else {
    vector <int> v;
    int sum1 = 0;
    for (int i = 2, j = 1; j <= d; j++, i += 2) {
      v.push_back(i); // 2 4
      sum1 += i; // n = 4,
    }
    int sum2 = 0; // sum1 = 6
    for (int i = 1, j = d+1; j <= n-1; j++, i += 2) { // j = 3
      v.push_back(i);
      sum2 += i;
    }
    int def = sum1 - sum2;
    v.push_back(def);
    cout << "YES\n";
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
  }
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}


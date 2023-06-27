#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  vector <int> v;
  int c = 0;
  int ans = 0;
  while(n > 0) {
    int d = n % 10;
    n /= 10;
    if (d == 0) {
      c++;
      continue;
    }
    else {
      int num = d * pow(10, c);
      c++;
      ans++;
      v.push_back(num);
    }

  }
  cout << ans << endl;
  for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
  cout << endl;
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}


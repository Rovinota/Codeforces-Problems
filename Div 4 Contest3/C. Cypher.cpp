#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  int a[n];
  vector <int> v;
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int k = 0; k < n; k++) {
    int num;
    cin >> num;
    string s;
    cin >> s;
    int i, sum;
    for (i = 0; i <= 9; i++) {
        sum = i;
      for (int j = 0; s[j] != '\0'; j++) {
        if (s[j] == 'U') {
          sum += 1;
          if (sum > 9) sum = 0;
        }
        else {
          sum -= 1;
          if (sum < 0) sum = 9;
        }
      }
      // cout << sum << endl;
      if (sum == a[k]) break;
    }
    v.push_back(i);
  }
  for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
  cout << endl;
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}



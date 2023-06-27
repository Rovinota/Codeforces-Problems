#include <bits/stdc++.h>
using namespace std;
int main () {
  int k;
  cin >> k;
  vector <int> v;
  for (int i = 1; i <= 12; i++) {
    int num;
    cin >> num;
    v.push_back(num);
  }
  int ans = 0;
  if (k == 0) {
    cout << ans << endl;
    return 0;
  }
  int sum = 0;
  sort(v.begin(), v.end());
  for (int i = 11; i >= 0; i--) {
    ans++;
    sum += v[i];
    if (sum >= k) {
      cout << ans  << endl;
      return 0;
    }
  }
  cout << -1  << endl;
}

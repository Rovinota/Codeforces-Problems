#include <bits/stdc++.h>
using namespace std;
void solve () {
  int a, b, c;
  cin >> a >> b >> c;
 // int ans [101];
  int result = INT_MAX;
  for (int i = 1; i <= 100; i++) {
    int sum = abs(i-a) + abs(i-b) + abs (i - c);
    result = min(result, sum);
  }
  cout << result << endl;
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}


#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  //array a;
  int a [n];
  for (int i = 0; i < n; i++) cin >> a[i];
  long long int ans = a[0];
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      long long int sum = a[i] + a[j];
      ans= max (ans, sum);
    }
  }
  cout << ans << endl;
}
int main () {
  int t;
  cin >> t;
  while (t--) solve ();
}

#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
void solve() {
  int n, k; cin >> n >> k;
  int a[n];
  int src = 1, fnd = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == src) {
      src++;
      fnd++;
    }
  }
  int bug = n - fnd;
  int ans = bug /  k;
  if (bug % k != 0) ans++;
  cout << ans << endl;
}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}

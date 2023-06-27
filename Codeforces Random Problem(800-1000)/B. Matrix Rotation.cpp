#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
//int a[2][2];
void solve() {
  int mx = INT_MIN;
  int mn = INT_MAX;
  int n = 2, m = 2;
  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int num; cin >> num;
      a[i][j] = num;
      mx = max(mx, num);
      mn = min(mn, num);
    }
  }
  int dif = mx - mn;
  if ((abs(a[0][0] - a[1][1]) == dif) || (abs(a[0][1] - a[1][0]) == dif) ) {
    cout << "Yes\n";
  }
  else cout << "No\n";

}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}


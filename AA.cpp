#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
const ll N = 1000000007;
void solve() {
  int n; cin >> n;
  int a[n];
  map <int, int> mp;
  int mx = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
    mx = max(mx, a[i]);
  }
  int ans = 0;
  for (int i = 1; i <= mx; i++) {
    if (mp[i] == 0) continue;
    if (i == 1) {
      if (mp[i] % 2 == 0) ans += mp[i]/2;
      else ans += (mp[i]/2) + 1;
    }
    else ans += mp[i];
  }
  cout << ans << endl;

}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}



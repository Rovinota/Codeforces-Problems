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
  int n, m; cin >> n >> m;
  vector <int> a(n+1);
  for (int i =1; i <= n; i++) cin >> a[i];
  map < int, int> mp;
  while(m--) {
    int num; cin >> num;
    mp[num]++;
  }
  while(1) {
    bool ok = false;
    for (int i = 1; i < n; i++) {
    if (a[i] > a[i+1] && mp[i]) {
      ok = true;
      swap(a[i], a[i+1]);
      }
    }
    if (!ok) break;
  }
  bool ok = true;
  for (int i = 1; i < n; i++) {
    ok &= (a[i] <= a[i+1]);
  }
  if (!ok) cout << "NO\n";
  else cout << "YES\n";
}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}



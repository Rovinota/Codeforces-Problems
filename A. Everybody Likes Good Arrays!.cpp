#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

void solve() {
  int n; cin >> n;
  vector <ll> v;
  for (int i = 0; i < n; i++) {
    ll num; cin >> num;
    v.push_back(num);
  }
  ll mul = v[0], ans = 0;
  for (int i = 1; i < v.size(); i++) {
    if ((mul + v[i]) % 2 == 0) {
      mul = mul * v[i];
      ans++;
    }
    else {
      mul  = v[i];
    }
  }
  cout << ans << endl;



}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}



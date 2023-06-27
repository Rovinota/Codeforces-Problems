#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

void solve() {
  int a[3];
  for (int i = 0; i < 3; i++) cin >> a[i];
  sort(a, a+3);
  if (a[0]+a[1] == a[2]) cout << "Yes\n";
  else cout << "No\n";


}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}



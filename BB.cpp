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
  int a1 , a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;
  if (a2< a3) swap (a2, a3);
  if (a1) cout << a1 + 2 * a3 + min (a1+1, a2-a3+a4) << endl;
  else cout << 1 << endl;

}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}



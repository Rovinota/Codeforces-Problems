#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

void solve() {
  int a, b;
  cin >> a >> b;
  if (a < b) {
  if (b-a == 0) cout << 0 << endl;
  else if ((b-a) % 2 == 0) cout << 2 << endl;
  else cout << 1 << endl;
  }
  else {
  if (b-a == 0) cout << 0 << endl;
  else if ((a-b) % 2 == 0) cout << 1 << endl;
  else cout << 2 << endl;
  }

}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}



#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
void answer ();
const ll N = 1000000007;
int main () {
  optimize()
  int t; cin >> t;
  while(t--) answer();
}
void answer() {
  int n; cin >> n;
  int a[n];

  for (int i = 0; i < n; i++) cin >> a[i];
  int t1 = count(a, a+n, 2);
  if (t1 == 0) {
    cout << 1 << endl;
    return;
  }
  int ans = -1;
  int t2 = 0;
  for (int i = 0; i < n; i++) {
    t2 += (a[i] == 2);
    if (2 * t2 == t1) {
      ans = i+1;
      break;
    }
  }
  cout << ans << endl;
}



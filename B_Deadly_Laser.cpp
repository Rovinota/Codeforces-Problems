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
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    if (sx - 1 > d && m - sy > d) cout << n+m-2 << endl;
    else if (sy - 1 > d && n - sx > d) cout << n+m-2 << endl;
    else cout << -1 << endl;
}


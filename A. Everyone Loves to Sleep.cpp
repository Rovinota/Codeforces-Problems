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
  int n, H, M; cin >> n >> H >> M;
  map <pair <int, int>, int> mp;
  for (int i = 0; i < n; i++) {
    int h, m; cin >> h >> m;
    mp[{h, m}]++;
  }
  int ansh = 0, ansm = 0;
  int cnt = 108;
  while(1) {
    if (M == 60) { // 7 0
      M = 0;
      H++;
    }
    if (H == 24) {
      H = 0;
      M = 0;
    }
    if (mp[{H, M}])break;
    M++;
    ansm++;
    // cout << H << " " << M << endl;
    if (ansm == 60) {
      ansh++;
      ansm = 0;
    }

  }
  cout << ansh << " " << ansm << endl;
}


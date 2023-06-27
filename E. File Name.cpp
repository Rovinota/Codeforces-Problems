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
  string s; cin >> s;
  int ans = 0;

  for (int i = 0; i < n-1; i++) {
    if (s[i] == 'x') {
      int cnt = 0;
      int j = i;
      while(s[j] == 'x') {
        cnt++;
        j++;
      }
      if (cnt > 2) {
        ans += (cnt-2);
      }
      i = j-1;
    }
  }
  cout << ans << endl;

}
int main () {
  optimize()
  solve();
}





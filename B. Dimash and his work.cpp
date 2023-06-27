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
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  int ans = 0;
  int cnt = 0, flag = 0;
  for (int i = 0; i < n-1; i++) {
    if (a[i] <= a[i+1]) {
      cnt = 0;
      while(a[i] <= a[i+1] && i < n-1) {
        i++;
        cnt++;
      }
      ans = max (ans, cnt); // 5 4 5 6 1 3
      i--;
    }
  }
  cout << ans+1 << endl;

}
int main () {
  optimize()
//  int t; cin >> t;
//  while(t--)
  solve();
}

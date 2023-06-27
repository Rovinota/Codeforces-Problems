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
  int n, m, k; cin >> n >> m >> k;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[n];
  sort(a, a+n);
  map <int, int> mp;
  for (int i = 0; i < m; i++) {
    int num; cin >> num;
    mp[num]++;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (mp[a[i]] > 0) {
      ans++;
      mp[a[i]]--;
    }
    else if (mp[a[i] + k] > 0) {
      ans++;
      mp[a[i]+k]--;
    }
    else if (mp[a[i] - k] > 0) {
      ans++;
      mp[a[i] - k]--;
    }
  }
  cout << ans << endl;

}



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
  int n, k; cin >> n >> k;
  int a[n];
  vector <int> ans;
  map <int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
    if (mp[a[i]] == 1) ans.push_back(i+1);
  }
  if (ans.size() >= k) {
    cout << "YES\n";
    for (int i = 0; i < k; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
  }
  else cout << "NO\n";


}
int main () {
  optimize()
  solve();
}



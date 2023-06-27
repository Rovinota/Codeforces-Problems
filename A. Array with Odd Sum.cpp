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
  ll sum = 0, odd = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    if (a[i] % 2 == 1) odd++;
  }
  if (sum % 2 == 1) {
    cout << "YES\n";
    //continue;
  }
  //continue;
  else {
    if (odd) {
      if (odd == n) {
        if (odd%2 == 1) cout << "YES\n";
        else cout << "NO\n";
      }
      else {
        cout << "YES\n";
      }
    }
    else cout << "NO\n";
  }

}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}



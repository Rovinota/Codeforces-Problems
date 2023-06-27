#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
void answer();

int main () {
  optimize()
  int t; cin >> t;
  while(t--) answer();
}

void answer() {
    ll n; cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    ll small = a[0] * a[1];
    ll big = a[n-1] * a[n-2];
    ll ans = max(small, big);
    cout << ans << endl;

}

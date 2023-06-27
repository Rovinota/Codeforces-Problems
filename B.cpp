#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int


//void solve() {
//  int n; cin >> n;
//  ll ans = fact[]
//
//}
ll N = 1000000007;
int main () {
  optimize()
  ll sz = 100000;

  long long fact[sz+1];
  fact [0] = 1;
  for (ll i = 1; i <= sz; i++) {
    ll mul = ((fact[i-1] % N) * i) % N;
    fact[i] = mul % N;
  }
  ll t; cin >> t;
  while(t--) {
    ll n; cin >> n;
    if (n == 1) {
      cout << 0 << endl;
      continue;
    }
    ll ans = n * (n-1);
    //cout << ans << endl;
    ll result =  ((ans  %  N) * (fact[n]  % N)) % N;
    cout << result << endl;
  }
}



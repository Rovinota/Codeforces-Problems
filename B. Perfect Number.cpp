#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
void answer ();
ll cal (ll n) {
  ll sum = 0;
  while(n != 0) {
    ll rem = n % 10;
    sum += rem;
    n /= 10;
  }
  return sum;
}
const ll N = 1000000007;
int main () {
  optimize()
   answer();
}
void answer() {
  ll n; cin >> n;
  ll ans = 0;
  while(n) {
    ans++;
    if(cal(ans) == 10) n--;
  }
  cout << ans << endl;
}



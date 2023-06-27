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
  answer();
}
void answer() {
  int n, k; cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 1; i < n; i++) {
    a[i] += a[i-1];
  }
  ll mn = INT_MAX, sum;
  int ans;
  for (int i = 0; i < n; i++) { // 1 2 6 1 1 7 1
    int ind = i + (k-1);
    if (ind < n) {
      if (i == 0) {
      sum = a[ind];
      if (sum < mn) {
        mn = sum;
        ans = i;
      }
     }
     else {
      sum = a[ind] - a[i-1];
      if (sum < mn) {
        mn = sum;
        ans = i;
      }
     }
    }
  }
  cout << ans+1 << endl;
}



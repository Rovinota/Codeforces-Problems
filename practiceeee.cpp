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
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a+n);
  for (int i = 0; i < n; i++) cout << a[i] << " ";
  cout << '\n';
  int key;
  cin >> key;
  int low = 0;
  int high = n-1;
  int ans;
  while(low <= high) {
    int mid = (low + high)/2;
    if (key >= a[mid]) {
      ans = mid+1;
      low = mid+1;
    }
    else  high = mid-1;
    //else high = mid-1;
  }
  cout << ans << endl;
}



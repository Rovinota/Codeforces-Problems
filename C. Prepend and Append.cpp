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
  string s; cin >> s;
  int cnt = 0;
  int i = 0, j = n-1;
  while(i < j) {
    int d1 = s[i] - 48;
    int d2 = s[j] - 48;
    if (d1 + d2 == 1) {
      cnt += 2;
    }
    else break;
    i++;
    j--;
  }
  int ans = n - cnt;
  cout << ans << endl;
}



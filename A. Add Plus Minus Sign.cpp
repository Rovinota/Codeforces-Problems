#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
void solve() {
  int n; cin >> n;
  string s; cin >> s;
  int sum = s[0] - '0';
 // cout << sum << endl;
  for (int i = 1; i < s.size(); i++) {
    int s1 = sum;
    int s2 = sum;
    int digit = s[i] - '0';
    //cout << digit << endl;
    s1 += digit;
    s2 -= digit;
    if (s2 >= 0) {
      if (s2 <= s1) sum = s2;
      cout << "-";
    }                       //01101
    else  {
      sum = s1;
      cout << "+";
    }

  }
  cout << endl;
}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}


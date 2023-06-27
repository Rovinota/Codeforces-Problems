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
  string s; cin >> s;
  if (s[1] == 'b') {
    cout << s[0] << " " << s.substr(1, s.size()-2) << " " << s[s.size()-1] << endl;
  }
  else cout << s[0] << " " << s[1] << " " << s.substr(2, s.size()-1)
}


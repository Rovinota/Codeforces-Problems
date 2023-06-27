#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

void solve() {
  int n, a, b; cin >> n >> a >> b;      // 6 2 5
  if (a == 1 && b == n) {
    for (int i = 0; i < n; i++) cout << i+1 << " ";
    cout << endl;
  }
  else {
    bool bug = false;
    vector <int> v;
    int d = n/2 -1;
    int num = n;
    map <int, int> mp;
    for (int i = 1; i < n/2; i++) {
       if (num != b) {
        v.push_back(num);
        mp[num]++;
        num--;
       }
       else num--;
    }
    v.push_back(a);
    mp[a]++;
    num = 1;
    for (int i = 1; i <= n/2; i++) {
      if (mp[num] == 0) {
        v.push_back(num);
        mp[num]++;
        num++;
      }
      else num++;
    }
    for (auto u : v) cout << u  << " ";
    cout << endl;
  }
}
int main () {
  //optimize()
  int t; cin >> t;
  while(t--) solve();
}



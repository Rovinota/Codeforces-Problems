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
  //int map <int, int> mp;
  priority_queue <pair <int, int>, vector <pair<int, int>>, greater <pair<int, int>>> v;
  for (int i = 0; i < 2*n; i++) {
    int num; cin >> num;
    v.push({num, i+1});
  }
  int a1, a2, ind1, ind2;
  while (!v.empty()) {
     a1 = v.top().first;
     ind1 =  v.top().second;
     v.pop();
    if (!v.empty()) {
      a2 = v.top().first;
      ind2 =  v.top().second;
      v.pop();
    }
    else a2 = -1;
    if (a1 == a2) {
      cout << ind1 << " " << ind2 << endl;
    }
    else cout << "-1\n";
  }




}
int main () {
  optimize()
//  int t; cin >> t;
//  while(t--)
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  solve();
}



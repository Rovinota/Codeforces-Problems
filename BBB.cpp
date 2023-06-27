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
  int n, s, r; cin >> n >> s >> r;
  vector <int> v;
  int mx = s - r;
  cout << mx << " ";
  //v.push_back(mx);
  int req_dice  = n - 1;
  int curr = mx;
  int sum = 0, dif = r;
  while (req_dice) { // 2 2 1
    dif = dif - curr;
    if (dif >= 0 && curr < req_dice) {
      cout << curr << " ";

      req_dice--;
    }
    else {
      dif += curr;
      curr--;
    }
  }
  cout << endl;
}



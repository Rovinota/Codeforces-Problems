#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

void solve() {
  int size; cin >> size;
  int a[size];
  map <int, int> mp;
  for (int i = 0; i < size; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }
  sort(a, a+size, greater <int> ());
  vector <int> ans;
  for (int i = 0; i < size-1; i++) {
    while (mp[a[i]]) {
      ans.push_back(a[i]);
      mp[a[i]]--;
      ans.push_back(a[])
    }
  }


}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}


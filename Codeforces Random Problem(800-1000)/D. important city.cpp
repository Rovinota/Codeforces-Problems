#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
vector <vector <int> > v ;
void solve() {
  int n; cin >> n;
  int temp = n-1;
  map <int, int > mp;
  while(temp--) {
    int a, b; cin >> a >> b;
    mp[a]++;
    mp[b]++;
  }
  int answer = 0;
  for (int i = 1; i <= n; i++) {
    if (mp[i] >= 2) answer++;
  }
  cout << answer << endl;

}
int main () {
  optimize()
  solve();
}



#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  int mn = min (a, b);
  int poss = mn / 2;
  int answer = 0;
  while(poss > 0 && c > 0) {
    poss--;
    c--;
    answer++;
  }
  cout << answer << endl;

}
int main () {
  optimize()
  solve();
}


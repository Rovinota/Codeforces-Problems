#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
const ll N = 1000000007;
void solve() {
  int n; cin >> n;
  string s; cin >> s;
  int ans = 0;
  string answer;
  string result = "";
  for (int i = 0; i < n-1; i++) {
    result += s[i];
    result += s[i+1];
    int cnt = 0;
    for (int j = i; j < n-1; j++) {
      if (s[j] == result[0] && s[j+1] == result[1]) cnt++;
    }
    //cnt++;
    if (cnt > ans) {
      ans = cnt;
      answer = result;
    }
    else result.clear();
  }
  cout << answer << endl; // 7
                                // ABACABA

}
int main () {
  optimize()
  solve();
}




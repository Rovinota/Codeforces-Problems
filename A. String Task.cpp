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
  answer();
}
void answer() {
  string s; cin >> s;
  string answer = "";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 65 && s[i] <= 90) s[i] = s[i] + 32;
  }
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' and s[i] != 'o' and s[i] != 'u' and s[i] != 'y') {
      answer += '.';
      answer += s[i];
    }
  }
  cout << answer << endl;
}



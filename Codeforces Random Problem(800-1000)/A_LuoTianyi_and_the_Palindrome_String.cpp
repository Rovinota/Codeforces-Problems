#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
void answer();

int main () {
  optimize()
  int t; cin >> t;
  while(t--) answer();
}

void answer() {
    string s; cin >> s;
    int f = 0;
    for (int i = 0; i < s.size(); i++) {
        char temp = s[0];
        s.erase(i, 1);
        string ts = s;
        reverse(ts.begin(), ts.end());
        if (ts != s) {
            f = 1;
            break;
        }
        s.insert(i, 1, temp);
    }
    if (f) cout << s.size() << endl;
    else cout << -1 << endl;
}

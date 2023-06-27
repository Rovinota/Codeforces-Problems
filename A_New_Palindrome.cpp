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
    int a[27] = {0};
    for (int i = 0; i < s.size(); i++) {
        int d = s[i] - 96;
        a[d]++;
    }
    int cnt = 0;
    for (int i = 1; i <= 26; i++) {
        if (a[i] >= 2 && a[i] != 0) cnt++;
    }
    //cout << cnt << endl;
    if (cnt >= 2) cout << "YES\n";
    else cout << "NO\n";

}

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
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        if (a[i] == 0) {
            while(a[i] != 1 && i < n) {
                cnt++;
                i++;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}

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
    int a, b; cin >> a >> b;
    int moda = abs(a);
    int modb = abs(b);

    if (moda == modb  || (max(moda, modb) - 1 == min(moda, modb))) {
        cout << moda+modb << endl;
        return;
    }
    else {
        int ans = max(moda, modb) * 2 - 1;
        cout << ans << endl;
    }

}

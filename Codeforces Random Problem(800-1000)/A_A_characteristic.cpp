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
    int n, k; cin >> n >> k;
    int x = -1;
    for (int i = 0; i <=n; i++) {
      int req = (i*(i-1)/2) + ((n-i)*(n-i - 1)/2);
      if (req == k) x = i;
    }
    if (x == -1) cout << "NO" << endl;
    else {
      cout << "YES\n";
      for (int i = 0; i < n; i++) {
        if (i < x) cout << 1 << " ";
        else cout << -1 << " ";
      }
      cout << endl;
    }

}

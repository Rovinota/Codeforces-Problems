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
  int t; cin >> t;
  while(t--) answer();
}
void answer() {
    int n; cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        v.push_back(num);
    }
    int ans = 0;
    
    for (int i = 0; i < n-1; i++) {
        
        if (is_sorted(v.begin(), v.end())) {
            break;
        }
        if (v[i]) {
            v[n-1] += v[i];
            v[i] = 0;
            ans++;
        }
        
    }
    cout << ans << endl;
}


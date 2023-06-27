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
    int b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = n-1; i >= 0; i--) {
        auto a1 = max_element(a, a+n);
        auto a2 = max_element(b, b+n);
        if (*a1 == a[n-1] && *a2 == b[n-1]) {
            cout << "Yes\n";
            return;
        }
        swap(a[i],b[i]);
    }
    auto a1 = max_element(a, a+n);
    auto a2 = max_element(b, b+n);
    if (*a1 == a[n-1] && *a2 == b[n-1]) {
            cout << "Yes\n";
            return;
    }
    cout << "No\n";
}


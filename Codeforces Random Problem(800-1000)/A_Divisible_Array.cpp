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
    int sum = n*(n+1)/2;
    if (sum % n == 0) {
        for (int i =  1; i <= n;  i++) cout << i << " " ;
        cout << endl;
        return;
    }
    int div = sum / n;
    div++;
    int first = (div * n - sum) + 1;
    cout << first << " ";
    for (int i =  2; i <= n;  i++) cout << i << " " ;
    cout << endl;
}

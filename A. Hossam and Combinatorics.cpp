#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

void solve() {
  ll n;
        cin>>n;

        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);

        if(a[0]==a[n-1]){
            cout<<n*(n-1)<<endl;

        }

        else {
          ll p=0,q=0;
        for(ll i=0;i<n;i++){
            if(a[i]==a[0]) p++;
            if(a[i]==a[n-1]) q++;
        }

        cout<<2*p*q<<endl;
        }
}
int main () {
  optimize()
  int t; cin >> t;
  while(t--) solve();
}

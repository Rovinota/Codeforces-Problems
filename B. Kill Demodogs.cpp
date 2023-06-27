#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e9 + 7;
int main () {
  int t; cin >> t;
  while(t--) {
    ll n; cin >> n;
    ll ans = 0;
    ll t1, t2;
    for (ll i = 1; i <= n; i++) {
      t1 = (i * i) % N;
      if (i != n)  t2 = (i * (i+1)) % N;
      else t2 = 0;
      ans += (t1 + t2);
    }
    ll res = (ans * 2022) % N;
    cout << res << endl;
  }
}


#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve () {
  ll x1, p1; cin >> x1 >> p1;
  ll x2, p2; cin >> x2 >> p2;
  int mn = min (p1, p2);
  p1 -= mn;
  p2 -= mn;
  if (p1 >= 12) cout << ">\n";
  else if (p2 >= 12) cout  << "<\n";
  else {
    while(p1--) x1 *= 10;
    while(p2--) x2 *= 10;
    if (x1 > x2) cout << ">\n";
    else if (x1 < x2) cout << "<\n";
    else cout << "=\n";
  }
}
int main () {
  int t; cin >> t;
  while(t--) solve();
}

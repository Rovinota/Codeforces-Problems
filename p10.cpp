#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve () {
  string n1, n2; cin >> n1 >> n2;
  if (n1 > n2) cout << ">\n";
  else if (n1 < n2) cout << "<\n";
  else cout << "=\n";
}
int main () {
  int t; cin >> t;
  while(t--) solve();
}


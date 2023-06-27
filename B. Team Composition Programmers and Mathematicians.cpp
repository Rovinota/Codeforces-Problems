#include <bits/stdc++.h>
using namespace std;
void solve() {
  int a, b;
  cin >> a >> b;
  int d = (a+b)/4;
  cout << min({a, b, d}) << endl;


}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

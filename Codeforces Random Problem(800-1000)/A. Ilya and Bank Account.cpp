#include <bits/stdc++.h>
using namespace std;
int main () {
  int n; cin >> n;
  if (n >= 0) cout << n << endl;
  else {
    int d1 = n / 10;
    int rem = n % 10;
    int d2 = n / 100;
    d2 = d2 * 10 + rem;
    cout << max(d1, d2) << endl;
  }
}

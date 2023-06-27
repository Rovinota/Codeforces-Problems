#include <bits/stdc++.h>
using namespace std;
void solve () {
  long long int n;
  cin >> n;
  if (n % 2 != 0 || n < 4) cout << "-1\n";
  else {
    long long  temp = n / 2, r2, r1;
    if (temp % 2 == 0) {
      r2 = temp / 2;
    }
    else {
      r2 = (temp - 1) / 2 ;
    }
    if (temp % 3 == 0) {
      r1 = temp / 3;

    }
    else {
      r1 = (temp ) / 3 + 1;
    }
    cout << r1 << " " << r2 << endl;
  }
}
int main () {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

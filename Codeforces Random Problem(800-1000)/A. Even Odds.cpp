#include <bits/stdc++.h>
using namespace std;
int main () {
  long long int n, k, d; cin >> n >> k;
  map <int, int> mp;
  if (n % 2 == 0)
   d = n / 2;
  else  d = n/2 + 1;
  if (k <= d) {
    long long int ans = 1 + (k - 1) * 2;
    cout << ans << endl;
  }
  else {
    long long int ans = 2 + (k - d -1) * 2;
    cout << ans << endl;
  }

}

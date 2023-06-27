#include <bits/stdc++.h>
using namespace std;
int main () {
  long long int n;
  cin >> n;
  if (n % 2 == 0) {
    long long int ans = n / 2;
    cout << ans << endl;
  }
  else {
    long long int ans = (n+1) / 2;
    cout << -ans << endl;
  }
}

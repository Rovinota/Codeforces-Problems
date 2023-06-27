#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long i, n, j;
    cin >> n;
    long long  a[n], b[n];
    for ( i = 0; i < n; i++) {
      cin >> a[i];
    }
    for ( i = 0; i < n; i++) {
      cin >> b[i];
    }
    for ( i = 0; i < n; i++) {
      if (a [i] > b [i]) swap (a [i], b [i]);
    }
    long long sum = 0;
    for (i = 0; i < n-1; i++) {
      sum += (abs(a[i+1] - a [i]) + abs(b[i+1] - b [i]));
    }
    cout << sum << endl;
  }
}

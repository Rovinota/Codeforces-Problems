#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main () {
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (i == 0 || i == n-1) {
      if (i == 0) {
        cout << a[i+1] - a[i] << " " << a[n-1] - a[i] << endl;
      }
      else {
        cout << a[n-1] - a[n-2] << " " << a[n-1] - a[0] << endl;
      }
    }
    else {
      ll t1 = a[i+1] - a[i];
      ll t2 = a[i] - a[i-1];
      cout << min(t1, t2) << " ";
      ll t3 = a[n-1] - a[i];
      ll t4 = a[i] - a[0];
      cout << max(t3, t4) << endl;
    }
  }
}

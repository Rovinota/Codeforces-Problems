#include <bits/stdc++.h>
using namespace std;
int main () {
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
//  sort (a, a+n);
  long long int sreja = 0, dima = 0;
  int j = n-1, i = 0;
  for (int k = 0; k < n; k++) {
    if (k % 2 == 0) {
      if (a[j] > a[i]) {
        sreja += a[j];
        j--;
      }
      else {
        sreja += a[i];
        i++;
      }
    }
    else {
      if (a[j] > a[i]) {
        dima += a[j];
        j--;
      }
      else {
        dima += a[i];
        i++;
      }
    }
  }
  cout << sreja << " " << dima << endl;
}

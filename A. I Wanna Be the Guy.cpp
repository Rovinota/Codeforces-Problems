#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, p , q;
  cin >> n;
  cin >> p;
  int A [p+q];
  for (int i = 0; i < p; i++) {
    cin >> A[i];
  }
  cin >> q;
  int B [q];
  for (int j = 0; j < q; j++) {
    cin >> B[j];
  }
  for (int k = p, l = 0 ; k < p+q, l < q; k++, l++) {
    A [k] = B[l];
  }
  int f = 0;

  for (int m = 1; m <= n; m++) {
      for (int n = 0; n < p+q; n++) {
        if (m == A[n]) {
          f++;
          break;
        }
      }
  }
    if (f == n ) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
}

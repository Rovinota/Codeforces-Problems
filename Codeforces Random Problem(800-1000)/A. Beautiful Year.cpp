#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int a[4];
  int i, j, f;
  for (i = n + 1;  ; ) {
    j = 0;
    f = 0;
    int temp = i;
    while(temp > 0) {
      int d = temp % 10;
      temp = temp / 10;
      a[j] = d;
      j++;
    }
    sort(a, a+4);
    for (int k = 0; k < 3; k++) {
      if (a[k] != a[k+1]) {
          f++;
      }
    }
    if (f == 3) break;
    else i = i + 1;
  }
  cout << i << endl;
}

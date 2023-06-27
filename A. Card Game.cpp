#include<bits/stdc++.h>
using namespace std;
int main () {
  int T, n, k1, k2, a, b;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    cin >> n >> k1 >> k2;
    int max = 0;
    for (int j = 1; j <= k1; j++) {
      cin >> a;
      if (a > max)
        max = a;
    }
    int c = 0;
    for (int k = 1; k <= k2; k++) {
      cin >> b;
      if (b > max) {
        c++;
        max = b;
      }
    }

     if (c == 0) {
      cout << "YES" << endl;
    }
    else
      cout << "NO" << endl;
  }
}

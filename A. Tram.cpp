#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int rp = 0;
  int m = 0;
  for (int i = 1; i <= n; i++) {
    int a, b;
    cin >> a >> b;
    rp = (rp - a) + b;
    if (rp > m) {
      m = rp;
    }
  }
  cout << m << endl;
}

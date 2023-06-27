#include <bits/stdc++.h>
using namespace std;
int main () {
  int t;
  cin >> t;
  while(t--) {
    int a, b;
    cin >> a >> b;
    if (a % b == 0) cout << "0\n";
    else {
      int temp = a / b;
      int ans = (temp + 1) * b - a;
      cout << ans << endl;
    }
  }
}

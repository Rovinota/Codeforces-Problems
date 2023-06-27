#include <bits/stdc++.h>
using namespace std;
int main () {
  int x;
  cin >> x;
  int ans = 0;
  while(x > 0) {
    if (x >= 5) {
      int temp = x / 5;
      ans += temp;
      x = x - temp * 5;
    }
    if (x >= 4) {

      int temp = x / 4;
      ans += temp;
      x = x - temp * 4;
    }
      if (x >= 3) {

      int temp = x / 3;
      ans += temp;
      x = x - temp * 3;
    }
      if (x >= 2) {

      int temp = x / 2;
      ans += temp;
      x = x - temp * 2;
    }
    if (x >= 1) {

      int temp = x / 1;
      ans += temp;
      x = x - temp * 1;
    }
  }
  cout << ans;
}

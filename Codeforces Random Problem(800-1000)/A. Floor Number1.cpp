#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n, x;
  cin >> n >> x;
  int temp = 2;
  int sum = 2;
  int ans = 1;
  while(1) {
    if (n <= 2) {
      //ans++;
      break;
    }
    sum += x;
    if (n > temp && n <= sum) {
      ans++;
      break;
    }
    else {
      ans++;
      temp = sum;
    }
  }
  cout << ans << endl;
}
int main () {
  int t;
  cin >> t;
  while(t--) solve ();
}


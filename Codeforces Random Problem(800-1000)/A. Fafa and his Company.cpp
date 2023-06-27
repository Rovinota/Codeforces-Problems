#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int temp = n;
  int i = 1;
  int ans = 0;
  while(1) {
    int s = n - i;
    if (s <= 0) break;
    if (s % i == 0) {
      ans++;
    }
    i++;
  }
  cout << ans << endl;
}

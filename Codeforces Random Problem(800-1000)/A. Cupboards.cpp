#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int a1 = 0, a0 = 0, b1 = 0, b0 = 0;
  int s1 = INT_MAX, s2 = INT_MAX;
  while(n--) {
    int a, b;
    cin >> a >> b;
    if(a) a1++;
    else a0++;
    if(b) b1++;
    else b0++;
    s1 = min(a1, a0);
    s2 = min(b1, b0);
  }
  int ans = s1 + s2;
  cout << ans << endl;
}

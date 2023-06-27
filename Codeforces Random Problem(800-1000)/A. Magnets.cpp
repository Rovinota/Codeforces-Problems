#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int temp = -1;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int num ;
    cin >> num;
    if (num != temp) {
      ans++;
      temp = num;
    }
  }
  cout << ans << endl;
}

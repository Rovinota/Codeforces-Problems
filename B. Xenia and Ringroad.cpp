#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, m;
  cin >> n >> m;
  long long int ans = 0;
  int temp = 1;
  for (int i = 1; i <= m; i++) {
    int num;
    cin >> num;
    if (temp <= num) {
      ans += num - temp;
      temp = num;
    }
    else {
      ans += (num - 1) + (n - temp) + 1;
      temp = num;
    }
  }
  cout << ans << endl;
}

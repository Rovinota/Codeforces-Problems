#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int num;
    cin >> num;
    sum += num;
  }
  int ans = 0;
  for (int i = 1; i<= 5 ; i++) {
    int temp = sum + i;
    if (temp % (n+1) != 1) {
      ans ++;
    }
  }
  cout << ans << endl;
}

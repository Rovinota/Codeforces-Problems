#include <bits/stdc++.h>
using namespace std;
int main () {

    int a, b;
    cin >> a >> b;
    int req = 240 - b;
    int sum = 0, i;
    for ( i = 1; i <= a; i++) {
      int temp = 5 * i;
      sum += temp;
      if (sum > req) {
        break;
      }
    }
    int ans = i - 1;
    cout << ans << endl;

}

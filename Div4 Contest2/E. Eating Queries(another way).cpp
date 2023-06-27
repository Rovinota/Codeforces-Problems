#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, q;
  cin >> n >> q;
  int a [n];
  int b[n];
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a+n, greater <int>());
  for (int i = 0; i < n; i++) {
    sum += a[i];
    b[i] = sum;
  }
  while(q--) {
    int num;
    cin >> num;
    if (num > b[n-1]) {
        cout << "-1\n";
    continue;
    }
    int low = 0;
    int high = n - 1;
    int ans ;
    while (low <= high) {
      int mid = (low + high)/ 2;
      if (b[mid] >= num) {
        ans = mid;
        high = mid - 1;
      }
      else low = mid + 1;
    }
    cout << (ans + 1) <<endl;
    }


}
int main () {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
}


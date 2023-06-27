#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, q;
  cin >> n >> q;
  int a [n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a+n);
  for (int j = 1; j <= q; j++) {
    int num;
    cin >> num;
    int low = 0, count = 0, sum = 0;
    int high = n-1;
    int mid = (low + high)/2;
     if (a[mid] < num) {
      for (int k = high; k >= low; k--) {
        sum += a[k];
        count++;
        if (sum >= num) break;
      }
    }
    else if(a[mid] >= num) {
      for (int k = low; k <= high; k++) {
        sum += a[k];
        count++;
        if (sum >= num) break;
      }
    }
    if (sum >= num) cout << count << endl;
    else cout << "-1\n";

  }
}
int main () {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
}

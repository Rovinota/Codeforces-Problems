#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int a[n], b[n];
  int i = 0;
  for (int i = 0; i < n; i++) {
    int n1, n2;
    cin >> n1 >> n2;
    a[i] = n1;
    b[i] = n2;
  }
  //for (int i = 0; i < n; i++) cout << a[i] << " ";
  // cout << endl;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i] == b[j]) ans++;
    }
  }
  cout << ans << endl;
}

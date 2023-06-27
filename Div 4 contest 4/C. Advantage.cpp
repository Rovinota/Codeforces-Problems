#include <bits/stdc++.h>
using namespace std;
int main () {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      b[i] = a[i];
    }
    sort(b, b+n);
    int dif;
    for (int i = 0; i < n; i++) {
      if (a[i] == b[n-1]) {
        dif = a[i] - b[n-2];
        cout << dif << " ";
      }
      else {
        dif = a[i] - b[n-1];
        cout << dif << " ";
      }
    }
    cout << endl;


  }
}



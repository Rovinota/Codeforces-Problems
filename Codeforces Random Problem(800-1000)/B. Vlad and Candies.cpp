#include <bits/stdc++.h>
using namespace std;
int main() {
  int t ;
  cin >> t;
  while (t--)  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int max;
    for (int j = 0; j < n; j++) {
      if (max > a[j])
        max = a[j];
    }
    int count = 0;
    for (int k = 0; k < n; k++) {
      if (max == a[k])
        count ++;
    }
    if (count  == 1) {
        int r = max - 1;
    int f = 0;
      for (int l = 0; l < n; l++) {
          if (a [l] == max) continue;
        if ( r <= a [l] ) f++;
      }
      if (f == 0) cout << "NO" << endl;
      else cout << "YES\n";
    }

  }

}


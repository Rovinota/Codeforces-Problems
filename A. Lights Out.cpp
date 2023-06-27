#include <bits/stdc++.h>
using namespace std;
void solve () {
  int a[4][4];
  for (int i = 1; i<= 3; i++) {
    for (int j = 1; j <= 3; j++) {
       a[i][j] = 1;
    }
  }
  int b[4][4];
  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
      cin >> b[i][j];
      int d = b[i][j];
      if (d % 2 == 0) continue;
      // cout << i << " " << j << endl;
      for (int k = 1; k <= d; k++) {
        if (a[i][j] == 1) a[i][j] = 0;
        else a[i][j] = 1;
        if (a[i][j+1] == 1) a[i][j+1] = 0;
        else a[i][j+1] = 1;
        if (a[i][j-1] == 1) a[i][j-1] = 0;
        else a[i][j-1] = 1;
        if (a[i+1][j] == 1) a[i+1][j] = 0;
        else a[i+1][j] = 1;
        if (a[i-1][j] == 1) a[i-1][j] = 0;
        else a[i-1][j] = 1;
        if (a[i+1][j+1] == 1) a[i+1][j+1] = 0;
        else a[i+1][j+1] = 1;
        if (a[i-1][j-1] == 1) a[i-1][j-1] = 0;
        else a[i-1][j-1] = 1;
        if (a[i-1][j+1] == 1) a[i-1][j+1] = 0;
        else a[i-1][j+1] = 1;
        if (a[i+1][j-1] == 1) a[i+1][j-1] = 0;
        else a[i+1][j-1] = 1;
      }
    }
  }
  for (int i = 1; i<= 3; i++) {
    for (int j = 1; j <= 3; j++) {
       cout << a[i][j];
    }
    cout << endl;
  }
}
int main () {
  solve();
}


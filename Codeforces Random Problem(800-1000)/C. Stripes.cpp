#include <bits/stdc++.h>
using namespace std;
int main () {
  int t; cin >> t;
  while(t--) {
    char a[8][8];
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++){
        cin >> a[i][j];
      }
    }
    //char ans = '.';
    bool flag = false;
    for (int i = 0; i < 8; i++) {
      int cnt = 0;
      for (int j = 0; j < 8; j++){
        if (a[i][j] == 'R') cnt++;
      }
      if (cnt == 8) {
        flag = true;
        break;
      }
    }
    if (flag) {
      cout << 'R' << endl;
      continue;
    }
    else {
      for (int i = 7; i >= 0; i--) {
      int cnt = 0;
      for (int j = 0; j < 8; j++){
        if (a[j][i] == 'B') cnt++;
      }
      if (cnt == 8) {
        flag = true;
        break;
      }
    }
      if (flag) {
      cout << 'B' << endl;
      continue;
    }
    }
  }
}

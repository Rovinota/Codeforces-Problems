#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, m;
  cin >> n >> m;
  int mn = min (n, m);
  int count = 0;
  for (int i = 0; i<=mn; i++) {
    for (int j = 0; j <= mn; j++) {
      if (i * i + j == n && i + j*j == m) count++;
    }
  }
  cout << count << endl;
}

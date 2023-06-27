#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  bool f = false;
  for (int i = 1; i <= n; i++) {
    int a, b;
    cin >> a >> b;
    if (a < b) f = true;
  }
  if (f) cout << "Happy Alex\n";
  else cout << "Poor Alex\n";


}


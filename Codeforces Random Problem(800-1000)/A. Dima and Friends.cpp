#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int num;
  for (int i = 0; i < n; i++) {
    cin >> num;
  }
  if (num % 2 == 0) cout << 2 << endl;
  else cout << 3 << endl;
}

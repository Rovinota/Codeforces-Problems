#include <bits/stdc++.h>
using namespace std;
bool checkPowersOfThree(int n) {
  int temp = log2(n) / log2 (3);
  for (int i = temp ; i >= 0; i--) {
    int t = pow (3, i);
    if (t <= n) {
      n = n - t;
      if (n == 0) return true;
    }
  }
  return false;
}
int main () {
  int n;
  cin >> n;
  bool f = false;
  int temp = log2(n) / log2 (3);
  for (int i = temp ; i >= 0; i--) {
    int t = pow (3, i);
    if (t <= n) {
      n = n - t;
      if (n == 0) f = true;
    }
  }
  if (f) cout << "True\n";
  else cout << "False\n";
}

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  int ara [n];
  for (int i = 0; i < n; i++ ) {
    cin >> ara [i];
  }
  int a = ara [k-1], count = 0;
  if (ara [k - 1] != 0) {
  for (int i = 0; i < n; i++) {
    if (ara [i] >= a) count++;
  }
  cout << count << endl;
  }
  else {
  for (int i = 0; i < n; i++) {
    if (ara [i] > a) count++;
  }
  cout << count << endl;
  }
}


#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  if (n == 0) {
    cout << "0 0 0\n";
    return 0;
  }
  if (n == 1) {
    cout << "0 0 1\n";
    return 0;
  }
  vector <long long int> v(50, 0);
  v[0] = 0;
  v[1] = 1;
  int pos;
  for (int i = 2; i <= 60; i++) {
    v[i] = v[i-1] + v[i-2];
    if (n == v[i]) {
      pos = i;
      break;
    }
  }
  cout << v[0] << " " << v[pos-2] << " " << v[pos-1] << endl;
}

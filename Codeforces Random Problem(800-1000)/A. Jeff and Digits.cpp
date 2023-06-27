#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int c5 = 0;
  int c0 = 0;
  vector <int> v;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (num == 5) c5++;
    else c0++;
    v.push_back(num);
  }
  sort(v.begin(), v.end());
  if (c0 == 0) {
    cout << "-1\n";
    return 0;
  }
  if (c5  < 9) cout << "0\n";
  else {
    int d = c5 / 9;
    int req = 9 * d;
    for (int i = 1; i <= req; i++) cout << "5";
    for (int i = 1; i <= c0; i++) cout << "0";
  }
}

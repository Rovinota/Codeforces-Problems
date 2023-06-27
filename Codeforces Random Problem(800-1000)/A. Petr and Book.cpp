#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int temp = n;
  int ans;
  vector <int> v;
  for (int i = 1; i <= 7; i++) {
    int num; cin >> num;
    v.push_back(num);
  }
  for (int i = 0; i < 7; i++) {
    n -= v[i];
    if (n <= 0) {
      ans = i+1;
      break;
    }
    if (n > 0 && i == 6) {
      i = -1;
    }
  }
  cout << ans << endl;
}

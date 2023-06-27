#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int mx = INT_MIN;
  map <int, int> mp;
  for (int i = 0; i < n; i++) {
    int num ;
    cin >> num;

    mp [num]++;
    mx = max(mx, mp[num]);
  }
  cout << mx << endl;
}

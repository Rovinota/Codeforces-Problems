#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  map <int, pair <int, int> > mp;
  for (int i = 1; i <= n; i++) {
    int num;
    cin >> num;
    mp [num] = {i, n - i + 1};
  }
  long long int s1 = 0, s2 = 0;
  int m;
  cin >> m;
  for (int i = 1; i <= m; i++) {
    int num;
    cin >> num;
    s1 += mp[num].first;
    s2 += mp[num].second;
  }
  cout << s1 << " " << s2 << endl;
}

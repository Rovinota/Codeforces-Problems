#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n, m;
  cin >> n >> m;
  string s = "";
  for (int i = 0; i < m; i++) s += 'B';
  int a[n+1];
  for (int i = 1; i <= n; i++) cin >> a[i];
  sort(a+1, a+n);
  for (int i = 1; i <= n; i++) {

    int d = m  - a[i];
    int x = min (a[i]-1, d);
    int y = max(a[i]-1, d);
    if (s[x] == 'B') s[x] = 'A';
    else s[y] = 'A';
  }
  cout << s << endl;
}
int main () {
  int t;
  cin >> t;
  while(t--) solve ();
}

#include <bits/stdc++.h>
using namespace std;
int main () {
  int  n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int mn = INT_MAX;
  int p1 = k * l/nl;
  mn = min (mn, p1);
  int p2 = c * d;
  mn = min (mn, p2);
  int p3 = p/np;
  mn = min (mn, p3);
  int ans = mn / n;
  cout << ans << endl;
}

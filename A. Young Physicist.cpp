#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  long long int s1 = 0, s2 = 0, s3 = 0;
  bool f = true;
  while(n--) {
    int a, b, c;
    cin >> a >> b >> c;
    s1 += a;
    s2 += b;
    s3 += c;
  }
  if (s1 == 0 && s2 == 0 && s3 == 0) cout << "YES\n";
  else cout << "NO\n";

}
int main () {
  ios_base::sync_with_stdio(0);
  solve();
}


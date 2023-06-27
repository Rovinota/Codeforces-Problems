#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  int s1 = 0, s2 = 0;
  while(n--) {
    int a, b;
    cin >> a >> b;
    if (a > b) s1 ++;
    else if (b > a) s2 ++;
  }
  if (s1 > s2) cout << "Mishka\n";
  else if (s2 > s1) cout << "Chris\n";
  else cout << "Friendship is magic!^^\n";
}
int main () {
  ios_base::sync_with_stdio(0);
   solve();
}

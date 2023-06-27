// Assalamualaikum
// vir's Code
// Let's Read this
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llf long long double
#define for1(i, n) for(int i = 0; i < n; i++)
#define for2(i, n) for(int i = 0; i <= n; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
void solve() {
  string s;
  cin >> s;
  for1(i, s.size()) {
    if ((s[i] != s[i+1]) and (s[i] != s[i-1])) {
      no;
      return;
    }
  }
  yes;
  return;
}
int main () {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
// Alhumdulillah

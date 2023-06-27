// Assalamualaikum
// vir's Code
// Let's Read this


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llf long long double
#define for1(i, n) for(int i = 0; i < n; i++)
#define for2(i, n) for(int i = 0; i <= n; i++)
#define for3(i, n) for(int i = 1; i <= n; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define asort sort(a,a+n)


void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (char c = 'A'; c <= 'Z'; c++) {
      int first = n;
      int last = -1;
    for (int i = 0; i < n; i++) {
      if (s[i] == c) {
        first = min (first, i);
        last = max (last, i);
      }
    }
    for (int j = first ; j <= last; j++) {
      if (s[j] != c) {
        no;
        return;
      }
    }
  }
  yes;
}


int main () {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
// Alhumdulillah

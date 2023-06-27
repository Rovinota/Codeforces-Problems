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
  int n, m;
  cin >> n >> m;
  vector < string > v;
  for1(i, n) {
    string s;
    cin >> s;
    v.push_back(s);
  }
  ll ans = INT_MAX, d ;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i+1; j < n; j++) {
            d = 0;
      for (int k = 0; k < m; k++) {
        d += abs (v[i][k] - v[j][k]);
      }
    ans = min (ans, d);
    }
  }
  cout <<  ans << endl;
}


int main () {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
// Alhumdulillah


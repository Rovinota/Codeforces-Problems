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
  ll a, b, c, x ,y, f = 0;
  cin >> a >> b >> c >> x >> y;
  if (a >= x) f++;
  else {
    int temp = x - a;
    c = c - temp;
    if (c >= 0)f++;
  }
  if (b >= y) f++;
  else {
    int temp = y - b;
    c = c - temp;
    if (c >= 0)f++;
  }
  if (f == 2) yes;
  else no;
}


int main () {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
// Alhumdulillah


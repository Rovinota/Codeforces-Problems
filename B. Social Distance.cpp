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
  cin >> n >>  m;
  int a [n+1];
  for1(i, n) {
    cin >> a[i];
  }
  asort;
  int temp = a[0];
  a[n] = a[0];
  a[0] = temp;
  ll sum = 0;
  for1(i, n) {
    sum += max (a[i], a[i+1]);
  }
  sum += n;
  if (sum <= m) yes;
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


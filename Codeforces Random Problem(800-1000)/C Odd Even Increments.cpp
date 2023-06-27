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
  int a [n+1];
  int e1 = 0, e2 = 0, o1 = 0, o2 = 0;
  for3(i, n) {
    cin >> a[i];
    if (i % 2 == 0) {
      if (a[i] % 2 == 0) e1++;
      else o1++;
    }
    else {
      if (a[i] % 2 == 0) e2++;
      else o2++;
    }
  }
  if ( e1+e2 == n || e1+o2 == n || e2 + o1 == n || o1 + o2 == n) yes;
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


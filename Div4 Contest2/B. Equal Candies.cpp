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
  int a[n];
  int min = INT_MAX;
  for1(i, n) {
    cin >> a[i];
    if (a[i] < min) min = a[i];
  }

  int sum = 0, d;
  for (int i = 0; i < n; i++) {
     d = a[i] - min;
    sum = sum + d;
  }
  cout << sum << endl;
}


int main () {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
// Alhumdulillah


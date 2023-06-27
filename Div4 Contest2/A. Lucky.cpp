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
  string s;
  cin >> s;
  int sum = 0, sum1 = 0;
  for (int i = 0; i < 3; i++) {
    int d = s[i];
    sum += d;
  }
  for (int i = 3; i < 6; i++) {
    int d = s[i];
    sum1 += d;
  }
  if (sum == sum1) yes;
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


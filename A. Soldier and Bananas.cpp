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
  int w, k, n, price = 0;
  cin >> k >> n >> w;
  for3(i, w) {
    price += i * k;
  }
  int r = price - n;
  if (r >= 0)    cout << r << endl;
  else cout << "0\n";

}


int main () {


    solve();

}
// Alhumdulillah


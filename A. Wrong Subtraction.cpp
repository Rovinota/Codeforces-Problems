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
  int n, t;
  cin >> n >> t;
  for3(i, t) {
  int temp = n % 10;
  int div = n / 10;
  if (temp == 0) {
    n = div;
    continue;
  }
  else n = n - 1;
  }
  cout << n << endl;
}


int main () {

    solve();

}
// Alhumdulillah


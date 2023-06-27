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
  int x, y;
  cin >> x >> y;
  if (x > y) cout << "0 0\n";
  else {
      int r = sqrt(y / x), r1 = x*1, temp;
    for (int i = 1; i <= r ; i++) {
       r1 = r1 * r;
      if (r1 >= y) {
        temp = i;
        break;
      }
    }
    cout << temp << " " << r << endl;
  }
}


int main () {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
// Alhumdulillah


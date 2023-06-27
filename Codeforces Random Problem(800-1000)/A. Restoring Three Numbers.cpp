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
  /*int a[4];
  int temp = INT_MIN;
  for1(i, 4) {
    cin >> a[i];
    if (a[i] > temp) temp = a[i];
  }
  for1(i, 4) {
    if (a[i] != temp) {
      int r = temp - a[i];
      cout << r << " ";
    }
  }
  */
  int a, b , c , d;
  cin >> a >> b >> c >> d;
  int sum = 0;
  if (a > sum) sum = a;
  if (b > sum) sum = b;
  if (c > sum) sum = c;
  if (d > sum) sum = d;
  if (a < sum) cout << sum - a << " ";
  if (b < sum) cout << sum - b << " ";
  if (c < sum) cout << sum - c << " ";
  if (d < sum) cout << sum - d << " ";


}


int main () {

    solve();

}
// Alhumdulillah


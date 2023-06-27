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
  int n, sum = 0;
  cin >> n;
  while (n--) {
  char a, b, c;
  cin >> a >> b >> c;
  if (b == '+') sum = sum + 1;
  else sum = sum - 1;
  }
  cout << sum << endl;
}


int main () {


    solve();

}
// Alhumdulillah


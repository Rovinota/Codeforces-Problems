
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
  int a, b;
  cin >> a >> b;
  int count = 0 ;
  if (a == b) cout << count + 1;
  else {
  while (1) {
    if (a > b){

      break;
    }
    else {
      a = a * 3;
      b = b * 2;
      count++;
    }

  }
  cout << count;
  }
}


int main () {
 ;

    solve();

}
// Alhumdulillah

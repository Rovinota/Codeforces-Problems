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
  vector <ll> v;
  v.push_back(1);
  v.push_back(2);
  for(int i = 3; i <= 1666 ; i++){
    if (i % 3 == 0 || i % 10 == 3) continue;
    else {
      v.push_back(i);
    }
  }
  ll n;
  cin >> n;
  ll k;
  while(n--) {
    cin >> k;
    cout << v[k - 1] << endl;
  }
}


int main () {

    solve();

}
// Alhumdulillah

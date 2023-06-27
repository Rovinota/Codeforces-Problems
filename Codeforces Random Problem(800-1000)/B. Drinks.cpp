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
  int n, num;
  cin >> n;
  int sum = 0;
  for3(i, n) {
    cin >> num ;
    sum += num;
  }
  double r = (double) sum / (100 * n);
  double r1 = r * 100;
  cout << r1 << endl;
}


int main () {


    solve();

}
// Alhumdulillah


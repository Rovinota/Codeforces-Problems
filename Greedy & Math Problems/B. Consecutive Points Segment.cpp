// Assalamualaikum
// vir's Code
// Let's Read this


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llf long long double
#define for1(i, n) for(int i = 0; i < n; i++)
#define for2(i, n) for(int i = 0; i <= n; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"


void solve() {
  int n;
  cin >> n;
  int b = n;
  vector <int> v;
  for1(i, n) {
    int a;
    cin >> a;
    v.push_back(a);
  }
  if (b == 1){
    yes;
    return;
  }
  else {
  int d = 0;
  for1(i, n-1) {
    d += v[i+1] - v[i];
  }
  if (d >= b - 1 && d <= b + 1) {
    yes; return;
  }
  else {
    no;
    return;
  }
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


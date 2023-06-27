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
  int temp1 = 0, temp2 = 0, num, i, j;
  for(i = 1; i <= 5; i++) {
    for(j = 1; j <= 5; j++) {
      cin >> num;
      if (num == 1) {
        temp1 = i;
        temp2 = j;

      }
    }
  }

  int r = abs(temp1 - 3) + abs(temp2 - 3);
  cout << r;
}


int main () {


    solve();

}
// Alhumdulillah


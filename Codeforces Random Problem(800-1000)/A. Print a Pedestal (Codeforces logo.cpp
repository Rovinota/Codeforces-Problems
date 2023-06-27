#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  if (n % 2 == 0) {
  int a = n/2;
  int b = a/2;
  int c = n - (a+b);
  if (a % 2 != 0)
  cout << c  << " " << a << " " << b << endl;
  else
     cout << c+1  << " " << a << " " << b-1 << endl;
  }
  else {
    int a = (n+1)/2;
  int b = a/2;
  int c = n - (a+b);
  if (a % 2 != 0)
  cout << b+1  << " " << a << " " << c-1 << endl;
  else
     cout << b  << " " << a << " " << c << endl;
  }
}
int main () {
  int t;
  cin >> t;
  while (t--) {
    solve ();
  }

}

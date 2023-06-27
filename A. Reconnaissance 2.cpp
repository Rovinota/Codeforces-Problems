#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  vector <int> v;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    v.push_back(num);
  }
  pair <int, int> p;
  int mn = abs(v[0] - v[n-1]);
  int a1 = n, a2 = 1;
  for (int i = 0; i < n-1; i++) {
    int d = abs(v[i]-v[i+1]);
    if (d < mn) {
      mn = d;
      a1 = i+1;
      a2 = i+2;
    }
  }
  cout << a1 << " " << a2;

}

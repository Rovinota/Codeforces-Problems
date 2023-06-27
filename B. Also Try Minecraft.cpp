#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main () {
  int n, m;
  cin >> n >> m;
  vector <int> v1(n+1, 0) ;
  vector < ll > v2(n+2, 0);
  vector<ll> v3(n+2, 0);

  for (int i = 1; i <= n; i++) {
    int num;
    cin >> num;
    v1[i] = num;
  }
  for (int i = 1; i <= n; i++) {
    v2[i] = v2[i-1];
    if (v1[i] < v1[i-1]) {
      v2[i] += (v1[i-1] - v1[i]);
    }
  }
  for (int i = n; i >= 1; i--) {
    v3[i] = v3[i+1];
    if (v1[i] < v1[i+1]) v3[i] += (v1[i+1] - v1[i]);
  }
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    if (a < b) cout << v2[b] - v2[a] << endl;
    else cout << -(v3[a] - v3[b]) << endl;
  }
}

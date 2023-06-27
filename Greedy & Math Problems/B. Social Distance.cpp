#include <bits/stdc++.h>
using namespace std;
int main () {
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
     int v [n+1];
     long long sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
  }
  sort(v, v+n);
  v[n] = v[0];
  for (int i = 0; i < n; i++) {
    sum = sum + max(v[i], v[i+1]);
  }
  sum = sum + n;
  if (sum <= m) cout << "YES\n";
  else cout << "NO\n";
}
}

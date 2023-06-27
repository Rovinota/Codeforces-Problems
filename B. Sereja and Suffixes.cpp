#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, m; cin >> n >> m;
  int a[n+1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int prefix[n+1] = {0};
  mp[a[n]]++;
  prefix[n] = 1;
  for (int i = n-1; i >= 1; i--) {
    mp[a[i]]++;
    if (mp[a[i]] == 1) {
      prefix[i] = prefix[i+1] + 1;
    }
    else prefix[i] = prefix[i+1];
  }
  while(m--) {
    int num; cin >> num;
    int ans =  prefix[num];
    cout << ans << endl;
  }
}

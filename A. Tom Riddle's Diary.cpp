#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  map <string, bool> cnt;
  for (int i = 1; i <= n; i++) {
    string s;
    cin >> s;
    //cnt[s]++;
    if (cnt[s] == 1) cout << "YES\n";
    else cout << "NO\n";
    cnt[s] = true;
  }
}

#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  map <string, int> cnt;
  vector <string> v;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    v.push_back(s);
    cnt[s]++;
  }
  string ans (n, '0');
  for (int i = 0; i < n; i++) {
    if (v[i].size() == 1) continue;
    for (int j = 1; j < v[i].size(); j++) {
        string s1 = "", s2 = "";
      for (int k = 0; k < j; k++) {
        s1 += v[i][k];
      }
      for (int k = j; k < v[i].size(); k++) {
        s2 += v[i][k];
      }
      if (cnt[s1] and cnt[s2]) {
        ans[i] = '1';
        break;
      }
    }
   // if( !(cnt.count(s1) and cnt.count(s2))) ans += '0';
  }
  cout << ans << endl;
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}

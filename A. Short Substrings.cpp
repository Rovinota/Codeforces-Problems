#include <bits/stdc++.h>
using namespace std;
void solve () {
  string s;
  cin >> s;
  vector <char> v;
  for (int i = 0; i < s.size(); i+=2) {
      v.push_back(s[i]);
  }
  v.push_back(s[s.size() - 1]);
  for (int i = 0; i < v.size(); i++) cout <<v[i];
  cout << endl;
}
int main () {
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) solve();
}


#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, m;
  cin >> n >> m;
  map <string, string> mp;
  for (int i = 0; i < n; i++) {
    string s1, s2;
    cin >> s1 >> s2;
    mp[s2] = s1;
  }
  for (int i = 1; i<= m; i++) {
    string s1, s2;
    cin >> s1 >> s2;
    string tem = s2;
    s2.pop_back();
    string temp = mp[s2];
    cout << s1 << " " << tem << " #" << temp << endl;
  }
}

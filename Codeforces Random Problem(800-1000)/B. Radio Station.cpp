#include <bits/stdc++.h>
using namespace std;
int main () {
  int n, m;
  cin >> n >> m;
  vector < pair <string, string> > v;
  for (int i = 1; i <= n; i++) {
    string s1, s2;
    cin >> s1 >> s2;
   // s1 += ';';
    s2 += ';';
    v.push_back({s1, s2});
  }
  vector < pair <string , string> > v1;
  for (int i = 1; i <= m; i++) {
    string s1, s2;
    cin >> s1 >> s2;
    v1.push_back({s1, s2});
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (v1[i].second == v[j].second) {
        cout << v1[i].first << " " << v1[i].second << " #" << v[j].first << endl;
      }
    }
  }
}

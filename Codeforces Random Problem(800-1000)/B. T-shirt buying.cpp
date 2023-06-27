#include <bits/stdc++.h>
#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main () {
  optimize();
  int n; cin >> n;
  vector <ll> v1;
  vector <ll> v2;
  vector <ll> v3;
  vector <ll> v4;
  for (int i = 0; i < n; i++) {
    ll num; cin >> num;
    v1.push_back(num);
  }
  for (int i = 0; i < n; i++) {
    ll num; cin >> num;
    v2.push_back(num);
  }
  for (int i = 0; i < n; i++) {
    ll num; cin >> num;
    v3.push_back(num);
  }
  priority_queue <ll, vector <ll>, greater <ll> > q[5][5];
  for (int i = 0; i < n; i++) {
    q[v2[i]][v3[i]].push(v1[i]);
  }
  int m; cin >> m     ;
  while(m--) {
    int c; cin >> c;
    ll ans = INT_MAX;
    int f , b;
    for (int i = 1; i <= 3; i++) {
      if (!q[c][i].empty() && q[c][i].top() < ans) {
        ans = q[c][i].top();
        f = c;
        b = i;
      }
    }
    for (int i = 1; i <= 3; i++) {
      if (!q[i][c].empty() && q[i][c].top() < ans) {
        ans = q[i][c].top();
        f = i;
        b = c;
      }
    }
    if (ans == INT_MAX) ans = -1;
    else {
      q[f][b].pop();
    }
    cout << ans << " ";
  }



}


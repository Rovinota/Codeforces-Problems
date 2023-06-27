#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (i % 2 == 1) cout << "#";
      else if(i % 4 == 2) {
        if (j == m) cout << "#";
        else cout << ".";
      }
      else  {
        if (j == 1) cout << "#";
        else cout << ".";
      }
    }
    cout << endl;
  }

}
int main () {
  ios_base::sync_with_stdio(0);
  solve();
}


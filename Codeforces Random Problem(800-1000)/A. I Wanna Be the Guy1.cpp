#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  vector <int> a(n+1, 0);
  int p; cin >> p;
  for (int i = 1; i <= p; i++) {
    int num;
    cin >> num;
    a[num]++;
  }
  int q; cin >> q;
  for (int i = 1; i <= q; i++) {
    int num;
    cin >> num;
    a[num]++;
  }
  for (int i = 1; i <= n; i++) {
    if (a[i] == 0) {
      cout << "Oh, my keyboard!\n";
      return 0;
    }

  }
  cout << "I become the guy.\n";
}

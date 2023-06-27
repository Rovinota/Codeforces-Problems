#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int temp = n;
  vector <pair <int, int> > v;
  int ans = 0;
  while(n--) {
    int a, b;
    cin >> a >> b;
    v.push_back({a,b});
  }
  for (int i = 0; i < temp; i++) {
   int  f = 0;
    for (int j = 0; j < temp; j++) {
      if (i != j){
        if (v[i].first == v[j].second) f++;
      }
    }
    if (f == 0) ans++;
  }
  cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  vector <int> a;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    a.push_back(num);
  }
  int m;
  cin >> m;
  vector <int> b;
  for (int i = 0; i < m; i++) {
    int num;
    cin >> num;
    b.push_back(num);
  }
  map <int , int> cnt;
  int mx = INT_MIN;
  for (int i = 0 ; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if ((b[j] % a[i]) == 0){
        int y = b[j] / a[i];
        if (y >= mx) {
          mx = y;
          cnt[mx]++;
        }
      }
    }
  }
  cout << cnt[mx] << endl;

}

#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  map <int, int> cnt;
  bool f  = true;
  int temp = INT_MAX;
  int ans ;
  for (int i = 1; i <= n; i++) {
    int num;
    cin >> num;

    cnt[num]++;

    if (num <= temp) {
      temp = num;
      ans = i;
    }

  }
  if (cnt[temp] <= 1) {
    cout << ans << endl;
  }
  else cout << "Still Rozdil\n";
}

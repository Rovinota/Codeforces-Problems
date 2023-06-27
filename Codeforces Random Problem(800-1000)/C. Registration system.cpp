#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  map <string, int> cnt;
  while(n--) {
    string s;
    cin >> s;
    cnt[s]++;
    if (cnt[s] == 1) cout << "OK\n";
    else cout << s << cnt[s] - 1 << endl;
  }

}

#include <bits/stdc++.h>
using namespace std;
int main () {
  string s;
  cin >> s;
  if (s.size() == 1) {
    int d = s[0] - '0';
    if (d % 4 == 0) cout << 4<< endl;
    else cout << "0\n";
  }
  else {
    int d1 = s[s.size()-2] - '0';
    int d2 = s[s.size()-1] - '0';
    int d = d1 * 10 + d2;
    //cout << d << endl;
    if (d % 4 == 0) cout << 4 << endl;
    else cout << "0\n";
  }

}

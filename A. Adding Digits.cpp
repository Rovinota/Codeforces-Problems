#include <bits/stdc++.h>
using namespace std;
int main () {
  int a, b, n;
  cin >> a >> b >> n;
  string s ;
  int c = 0;
  int  temp = n;
  while(n--) {
    for (int i = 0; i < 10; i++) {
      long long int  d = a * 10 + i;
      if (d % b == 0) {
        c++;
        s = to_string(d);
        break;
      }
    }
    if (c == 1) break;
    else {
      cout << "-1\n";
      return 0;
    }
  }
  for (int i = 1; i <= temp-1; i++) {
    s += '0';
  }
  cout << s << endl;

}

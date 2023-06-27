#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main () {
  string s;
  cin >> s;
  int count = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 52 || s[i] == 55) {
      count++;
    }


}
if (count == 4 || count == 7) cout << "YES\n";
  else cout << "NO\n";
}

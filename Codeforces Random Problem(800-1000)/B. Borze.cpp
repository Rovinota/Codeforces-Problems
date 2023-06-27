#include <bits/stdc++.h>
using namespace std;
int main () {
  string s;
  cin >> s;
  vector <char> v;
  for(int i = 0; s[i] != '\0'; i++) {
    if (s[i] == '.') v.push_back('0');
    else {
      if (s[i+1] == '-') {
        v.push_back('2');
        i++;
      }
      else if (s[i+1] == '.') {
        v.push_back('1');
        i++;
      }

    }
  }
  for (auto u : v) cout << u;
  cout << endl;
}

#include <bits/stdc++.h>
using namespace std;
int main () {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    string s ; cin >> s;
    sort(s.begin(), s.end());
    string ans1 = "";
    int first = 0, last = s.size() - 1;
    for (int i = 0; i < s.size(); i += 2) {
      ans1 += s[i];
    }
    int  ind ;
    if (s.size() % 2 == 1) ind = s.size() - 2;
    else ind = s.size() - 1;
    string ans2 = "";
    for (int i = ind; i >= 0; i -= 2) {
      ans2 += s[i];
    }
    string result = ans1 + ans2;
    string temp = result;
    //cout << temp << endl;
    reverse(result.begin(), result.end());
    //cout << result << endl;
    if (temp == result) cout << "Yes\n";
    else cout << "No\n";
  }
}

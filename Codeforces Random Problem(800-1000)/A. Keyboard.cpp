#include <bits/stdc++.h>
using namespace std;
int main () {
  string s1 = "qwertyuiop";
  string s2 = "asdfghjkl;";
  string s3 = "zxcvbnm,./";
  char ch; cin >> ch;
  string s; cin >> s;
  for (int i = 0; i < s.size(); i++) {
    char temp = s[i];
    if (count(s1.begin(), s1.end(), temp)) {
      for (int j = 0; j < s1.size(); j++) {
        if (s1[j] == temp) {
          if (ch == 'R') {
            cout << s1[j-1];
            break;
          }
          else {
            cout << s1[j+1];
            break;
          }
        }
      }
    }
    else if (count(s2.begin(), s2.end(), temp)) {
      for (int j = 0; j < s2.size(); j++) {
        if (s2[j] == temp) {
          if (ch == 'R') {
            cout << s2[j-1];
            break;
          }
          else {
            cout << s2[j+1];
            break;
          }
        }
      }
    }
    else {
      for (int j = 0; j < s3.size(); j++) {
        if (s3[j] == temp) {
          if (ch == 'R') {
            cout << s3[j-1];
            break;
          }
          else {
            cout << s3[j+1];
            break;
          }
        }
      }
    }
  }
  //cout << count(s.begin(), s.end(), 's');

}

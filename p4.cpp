#include <bits/stdc++.h>
using namespace std;
class secure {
  string password;
public:
  secure (string s) {
    password = s;
  }
  void getter(string s1) {
    if (password == s1) cout << "Right Password\n";
    else cout << "Wrong Password, Try Again\n";
  }
};
int main () {
    secure a("@tanvir@25401@fb@");
    string t;
    cin >> t;
    a.getter(t);
}

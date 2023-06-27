#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  char str [101];
  while(n--) {

    cin >> str;
    int d = strlen(str);
    if (d <= 10)
      cout << str << endl;
    else
      cout << str[0] << (d - 2) << str [d-1] << endl;
  }

}




#include <bits/stdc++.h>
using namespace std;
int main () {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a [n];
    int count = 0 , b = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      int a1 = i % 2;
      int b1 = a[i] % 2;
      if (a1 != b1) {
          if (i % 2 == 0) {
            count++;
          }
          else
            b++;
    }


  }
  if (count != b) {
      cout << "-1" << endl;
    }
    else cout << count<< endl;
}
}

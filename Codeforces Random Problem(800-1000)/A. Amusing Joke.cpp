#include <bits/stdc++.h>
using namespace std;
int main () {
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  int a[27] = {0};
  int b[27] = {0};
  for (int i = 0; s1[i] != '\0'; i++) {
    int d = s1[i] - 64;
    a[d]++;
  }
  for (int i = 0; s2[i] != '\0'; i++) {
    int d = s2[i] - 64;
    a[d]++;
  }
  for (int i = 0; s3[i] != '\0'; i++) {
    int d = s3[i] - 64;
    b[d]++;
  }
  for (int i = 1; i <= 26; i++) {
    //cout << a[i] << " " << b[i] << endl;
    if (a[i] != b[i]) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
}

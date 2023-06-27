#include <bits/stdc++.h>
using namespace std;
int main () {
  int s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  int t = (s1*s2)/s3;
  int a = sqrt(t);
   t = (s2*s3)/s1;
  int b = sqrt(t);
   t = (s1*s3)/s2;
  int c = sqrt(t);
  int ans = 4*(a+b+c);
  cout << ans << endl;
}

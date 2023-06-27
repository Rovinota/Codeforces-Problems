#include <bits/stdc++.h>
using namespace std;
 bool isPowerOfThree(int n) {
   if (n <= 0) return false;
   else {
  int t = n & (n - 1);
  if (t == 0) return true;
  else return false;
   }
}
int main () {
  int n;
  cin >> n;
  int f = isPowerOfThree( n);
  cout << f << endl;


}

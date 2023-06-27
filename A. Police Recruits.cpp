#include <bits/stdc++.h>
using namespace std;
int main () {
  int t, n, sum = 0, count = 0;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n >  0) {
      sum = sum + n;
    }
    else  {
      if (sum == 0){
        count++;
      }
      else {
        sum = sum + n;
    }
    }


  }
  cout << count << endl;

}

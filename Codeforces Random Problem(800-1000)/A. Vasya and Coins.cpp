#include <bits/stdc++.h>
using namespace std;
int main() {
  int t ;
  cin >> t;
  while (t--) {
    int  a,b;
    cin >> a >> b;
    long long d = a * 1;
    long long e = b * 2;
    if (d > 0 && e > 0) {
     long long r = (d + e + 1);
      cout << r << endl;}
      else if (d == 0 && e != 0) {
        cout << "1\n";
      }
      else if (e == 0 && d != 0){

          long long r = d + e + 1;
          cout << r << endl;
    }
    else
    cout <<"1\n";



  }
}




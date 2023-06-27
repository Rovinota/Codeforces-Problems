#include <bits/stdc++.h>
using namespace std;
int minOperation(int n){
      int op = 0;
  for (int i = n; ; ) {
      op++;
    if (i % 2 == 0) {
      i = i/2;
    }
    else i = i - 1;
    if (i <= 0) break;
  }
  return op;
}
int main () {
  int n;
  cin >> n;
  int op = 0;
  for (int i = n; ; ) {
      op++;
    if (i % 2 == 0) {
      i = i/2;
    }
    else i = i - 1;
    if (i <= 0) break;
  }
  cout << op << endl;

}

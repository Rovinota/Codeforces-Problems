#include <bits/stdc++.h>
using namespace std;
int count_Digit(int n) {
  int cnt = 0;
  while (n != 0) {
    int rem = n % 10;
    n /= 10;
    cnt++;
  }
  return cnt;
}
int main () {
  int test; cin >> test;
  while(test--) {
    int n; cin >> n;
    int rem = n % 10;
    int answer = 0;
    for (int i = 1; i < rem; i++) {
      answer += 10;
    }
    int cnt = count_Digit(n);
    for (int i = 1; i <= cnt; i++) {
      answer += i;
    }
    cout << answer << endl;
  }
}

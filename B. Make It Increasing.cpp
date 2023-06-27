#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main () {
  optimize();
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int answer = 0;
//    if (is_sorted(a, a+n)) {
//      goto result;
//    }
    for (int i = n-2; i >= 0; i--) {
      while(a[i] >= a[i+1] && a[i] > 0) {
        a[i] /= 2;
        answer++;
      }
      if (a[i+1] == a[i]) {
        answer = -1;
        break;
      }
    }
      cout << answer << endl;
  }
}

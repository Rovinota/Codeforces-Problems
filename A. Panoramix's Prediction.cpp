#include <bits/stdc++.h>
using namespace std;
const int  N = 1e7 + 10;
vector <bool> isprime(N, 1);
int main () {
  isprime[0] = isprime [1] = false;
    for (int i = 2; i <= N; i++) {
      if (isprime[i]) {
        for (int j = 2 * i; j <= N; j += i) {
          isprime[j] = false;
        }
      }
    }
  int n, m;
  cin >> n >> m;

  for (int i = n+1; i <= m; i++) {
    if (isprime[i]) {
      if (i == m) {
        cout << "YES\n";
        return 0;
      }
      break;
    }
  }
  cout << "NO\n";
}


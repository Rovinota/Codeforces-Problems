#include<bits/stdc++.h>
using namespace std;
int main () {
int n; cin >> n;
int ar[n*2 + 5];
int ar2[10] = {0};
for (int i = 1; i <= 2*n; i++) {
  int x; cin >> x;
  ar2[x]++;
  if (ar2[x] == 1) {
    cout << x << " ";
  }
}
}

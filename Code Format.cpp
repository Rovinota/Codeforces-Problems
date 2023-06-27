#include <bits/stdc++.h>
using namespace std;
void solve(int a[]) {
  cout << a.size() << endl;
  for (int i = 0; i < a.size(); i++) {
    printf("%d ", a[i]);
  }
printf("\n");
}

int main () {

int a[5] = {1,2,3,4,5};
    solve(a);
int d = sizeof(a)/sizeof (a[0]);
  printf("%d", d);
}
// Alhumdulillah

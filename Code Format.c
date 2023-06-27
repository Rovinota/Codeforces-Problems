#include <stdio.h>
#include <stdlib.h>
void solve(int a[]) {
  int d = sizeof(a)/sizeof(a[0]);
  printf("%d\n", d);
  for (int i = 0; i < d; i++) {
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
